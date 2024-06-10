#include "IGS_AISwatSniperTierDef.h"
#include "GameplayTagContainer.h"
#include "EIGS_WeaponVisibilityType.h"

FIGS_AISwatSniperTierDef::FIGS_AISwatSniperTierDef() {
    (*this).SpecStats.HitChance = 8.000000119e-01f;
    (*this).SpecStats.HiddenTimeInterval.Min = 3.000000000e+00f;
    (*this).SpecStats.HiddenTimeInterval.Max = 5.000000000e+00f;
    (*this).SpecStats.CompromisedRange = 5.000000000e+02f;
    (*this).SpecStats.WeaponVisibilityType = EIGS_WeaponVisibilityType::VT_Laser;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Specialization, 0)) = TEXT("AI.Specialization.Sniper");
}

