#include "IGS_UGCBaseGameInstance.h"
#include "UGCRegistry.h"
#include "IGS_UGCModBase.h"

UIGS_UGCBaseGameInstance::UIGS_UGCBaseGameInstance() {
}

void UIGS_UGCBaseGameInstance::OnQuickPlayStashInitialized() {
}

void UIGS_UGCBaseGameInstance::OnMetaPlayStashInitialized() {
}

void UIGS_UGCBaseGameInstance::Init()
{
    // Instantiate the registry and find mod packages
    UGCRegistry = NewObject<UUGCRegistry>(this);
    UGCRegistry->FindUGCPackages();
    TArray<UClass*> Classes;
    for (auto const& Package : UGCRegistry->UGCPackages)
    {
        Classes.Empty();
        UGCRegistry->GetAllClassesInPackage(Package, Classes);
        for (auto Class : Classes)
        {
            if (Class->IsChildOf<UIGS_UGCModBase>() && !Class->HasAnyClassFlags(CLASS_Abstract))
            {
                if (UGCModObjects.ContainsByPredicate([&](auto Obj) {return Obj->GetClass() == Class; }))
                {
                    continue;
                }
                auto Mod = NewObject<UIGS_UGCModBase>(this, Class);
                Mod->GameInstance = this;
                UGCModObjects.Add(Mod);
            }
        }
    }
    for (auto Mod : UGCModObjects)
    {
        Mod->GameInstanceInitialized();
    }
    Super::Init();
}

void UIGS_UGCBaseGameInstance::OnStarterMapInitialized()
{
    for (auto Mod : UGCModObjects)
    {
        Mod->StarterMapInitialized();
    }
}
