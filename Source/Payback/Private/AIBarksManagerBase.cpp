#include "AIBarksManagerBase.h"
#include "ComponentInstanceDataCache.h"

UAIBarksManagerBase::UAIBarksManagerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).CombatTauntsCooldownPerChar = 1.500000000e+01f;
    (*this).CombatTauntsCooldownGlobal = 8.000000000e+00f;
    (*this).CombatTauntsDistance = 1.500000000e+03f;
    (*this).StealthIdleCooldownPerChar = 1.500000000e+01f;
    (*this).StealthIdleCooldownGlobal = 8.000000000e+00f;
    (*this).StealthIdleDistance = 1.500000000e+03f;
    (*this).PrimaryComponentTick.bCanEverTick = true;
    (*this).PrimaryComponentTick.bStartWithTickEnabled = false;
    (*this).PrimaryComponentTick.TickInterval = 3.000000119e-01f;
}

void UAIBarksManagerBase::ReportStealthIdleDialogue(AIGS_GameCharacterFramework* inCharacterFramework, FText inDialogue) {
}


