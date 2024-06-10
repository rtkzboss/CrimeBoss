#include "IGS_AISwatShieldTierDef.h"
#include "GameplayTagContainer.h"

FIGS_AISwatShieldTierDef::FIGS_AISwatShieldTierDef() {
    (*this).SpecStats.ShieldGlassHP = 3.000000000e+02f;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Specialization, 0)) = TEXT("AI.Specialization.Special.Shield");
}

