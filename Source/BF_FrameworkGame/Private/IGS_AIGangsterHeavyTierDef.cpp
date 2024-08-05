#include "IGS_AIGangsterHeavyTierDef.h"
#include "GameplayTagContainer.h"

FIGS_AIGangsterHeavyTierDef::FIGS_AIGangsterHeavyTierDef() {
    (*this).SpecStats.WeakspotExplosionDamage = 1.000000000e+02f;
    (*this).SpecStats.InitialSpreadMultiplier = 2.000000000e+00f;
    (*this).SpecStats.SpreadDuration = 4.000000000e+00f;
    (*this).SpecStats.TimeTillOverheat.Min = 1.300000000e+01f;
    (*this).SpecStats.TimeTillOverheat.Max = 1.500000000e+01f;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Specialization, 0)) = TEXT("AI.Specialization.Special.Heavy");
}

