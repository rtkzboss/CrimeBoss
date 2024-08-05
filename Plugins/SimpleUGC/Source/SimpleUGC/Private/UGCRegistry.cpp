#include "UGCRegistry.h"
#include "Templates/SubclassOf.h"

UUGCRegistry::UUGCRegistry() {
}

void UUGCRegistry::RegisterOverrideForClass(TSubclassOf<AActor> ClassToOverride, TSubclassOf<AActor> OverrideClass) {
}

TSubclassOf<AActor> UUGCRegistry::GetOverrideForActorClass(TSubclassOf<AActor> ActorClass) {
    return NULL;
}

bool UUGCRegistry::GetMapsInPackage(FUGCPackage Package, TArray<FName>& Maps) {
    return false;
}

bool UUGCRegistry::GetAllClassesInPackage(FUGCPackage Package, TArray<UClass*>& Classes) {
    return false;
}

bool UUGCRegistry::GetActorClassesWithReplacementActorComponentsInPackage(FUGCPackage Package, TArray<TSubclassOf<AActor>>& ActorClasses) {
    return false;
}

bool UUGCRegistry::FindUGCPackages() {
    return false;
}

void UUGCRegistry::ClearOverrideForClass(TSubclassOf<AActor> ActorClass) {
}

bool UUGCRegistry::ApplyOverridesForActorClass(TSubclassOf<AActor> ActorClass) {
    return false;
}

bool UUGCRegistry::ApplyAllOverridesInPackage(FUGCPackage Package) {
    return false;
}


