#include "UGCRegistry.h"
#include "AssetRegistryModule.h"
#include "Templates/SubclassOf.h"
#include "Interfaces/IPluginManager.h"
#include "ARFilter.h"
#include "ReplacementActorComponent.h"
#include "MakeReplaceableActorComponent.h"
#include "Engine/SimpleConstructionScript.h"
#include "Engine/SCS_Node.h"
#include "Engine/BlueprintGeneratedClass.h"

UUGCRegistry::UUGCRegistry() {
}

void UUGCRegistry::RegisterOverrideForClass(TSubclassOf<AActor> ClassToOverride, TSubclassOf<AActor> OverrideClass) {
    RegisteredOverrides.Emplace(ClassToOverride, OverrideClass);
}

TSubclassOf<AActor> UUGCRegistry::GetOverrideForActorClass(TSubclassOf<AActor> ActorClass) {
    auto Override = RegisteredOverrides.Find(ActorClass);
    return Override ? *Override : ActorClass;
}

bool UUGCRegistry::GetMapsInPackage(FUGCPackage Package, TArray<FName>& Maps) {
    return false;
}

bool UUGCRegistry::GetAllClassesInPackage(FUGCPackage Package, TArray<UClass*>& Classes) {
    auto& AssetRegistry = GetAssetRegistry();
    FARFilter ARFilter;
    TArray<FAssetData> AssetList;
    ARFilter.bRecursivePaths = true;
    ARFilter.bIncludeOnlyOnDiskAssets = true;
    ARFilter.bRecursiveClasses = true;
    ARFilter.ClassNames.Add(UBlueprint::StaticClass()->GetFName());
    ARFilter.PackagePaths.Add(FName(*Package.PackagePath));
    AssetRegistry.GetAssets(ARFilter, AssetList);

    for (auto const& Asset : AssetList)
    {
        auto GeneratedClassResult = Asset.TagsAndValues.FindTag("GeneratedClass");
        if (!GeneratedClassResult.IsSet()) continue;

        auto ClassPath = FPackageName::ExportTextPathToObjectPath(GeneratedClassResult.GetValue());
        if (auto AssetClass = LoadObject<UClass>(NULL, *ClassPath)) Classes.Add(AssetClass);
    }
    return Classes.Num() > 0;
}

bool UUGCRegistry::GetActorClassesWithReplacementActorComponentsInPackage(FUGCPackage Package, TArray<TSubclassOf<AActor>>& ActorClasses) {
    return false;
}

bool UUGCRegistry::FindUGCPackages() {
    for (auto const& Plugin : IPluginManager::Get().GetEnabledPlugins())
    {
        if (Plugin->GetLoadedFrom() != EPluginLoadedFrom::Project || Plugin->GetDescriptor().Category != "CBUGC") continue;

        FUGCPackage Package;
        Package.PackagePath = *Plugin->GetMountedAssetPath().LeftChop(1);
        Package.FriendlyName = *Plugin->GetDescriptor().FriendlyName;
        Package.EngineVersion = *Plugin->GetDescriptor().EngineVersion;
        Package.ModVersion = *Plugin->GetDescriptor().VersionName;
        Package.Author = *Plugin->GetDescriptor().CreatedBy;
        Package.Description = *Plugin->GetDescriptor().Description;
        UGCPackages.Add(Package);
    }
    return UGCPackages.Num() > 0;
}

void UUGCRegistry::ClearOverrideForClass(TSubclassOf<AActor> ActorClass) {
    RegisteredOverrides.Remove(ActorClass);
}

bool UUGCRegistry::ApplyOverridesForActorClass(TSubclassOf<AActor> ActorClass) {
    auto BlueprintActorClass = Cast<UBlueprintGeneratedClass>(ActorClass);
    if (!BlueprintActorClass || !BlueprintActorClass->SimpleConstructionScript) return false;

    auto bFound = false;
    for (auto Node : BlueprintActorClass->SimpleConstructionScript->GetRootNodes())
    {
        auto ReplacementActorComponent = Cast<UReplacementActorComponent>(Node->ComponentTemplate);
        if (!ReplacementActorComponent) continue;
        for (auto ActorClassToReplace : ReplacementActorComponent->ActorClassesToReplace)
        {
            auto BlueprintClassToReplace = Cast<UBlueprintGeneratedClass>(ActorClassToReplace);
            if (!BlueprintClassToReplace || !BlueprintClassToReplace->SimpleConstructionScript) continue;

            for (auto ActorClassToReplaceNode : BlueprintClassToReplace->SimpleConstructionScript->GetRootNodes())
            {
                auto MakeReplaceableActorComponent = Cast<UMakeReplaceableActorComponent>(ActorClassToReplaceNode->ComponentTemplate);
                if (!MakeReplaceableActorComponent || !ActorClass->IsChildOf(MakeReplaceableActorComponent->CompatibleReplacement)) continue;

                RegisterOverrideForClass(ActorClassToReplace, ActorClass);
                bFound = true;
            }
        }
    }
    return bFound;
}

bool UUGCRegistry::ApplyAllOverridesInPackage(FUGCPackage Package) {
    TArray<UClass*> Classes;
    GetAllClassesInPackage(Package, Classes);
    bool bFound = false;
    for (auto Class : Classes)
    {
        bFound |= ApplyOverridesForActorClass(Class);
    }
    return bFound;
}

IAssetRegistry& UUGCRegistry::GetAssetRegistry() {
    if (!CachedAssetRegistryModule)
    {
        CachedAssetRegistryModule = &FModuleManager::LoadModuleChecked<FAssetRegistryModule>(TEXT("AssetRegistry"));
    }
    return CachedAssetRegistryModule->Get();
}
