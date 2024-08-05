#include "IGS_AIGangsterDetectiveTierDef.h"
#include "GameplayTagContainer.h"

FIGS_AIGangsterDetectiveTierDef::FIGS_AIGangsterDetectiveTierDef() {
    (*this).SpecStats.ReviveTimer.Min = 2.000000000e+01f;
    (*this).SpecStats.ReviveTimer.Max = 3.000000000e+01f;
    (*this).SpecStats.DownstateHealth = 2.000000000e+03f;
    (*this).SpecStats.RevivesToRetreat = 3;
    (*this).SpecStats.MaxHealthForReaction = 1.000000000e+00f;
    (*this).SpecStats.MaxHealthForCover = 1.000000000e+00f;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Specialization, 0)) = TEXT("AI.Specialization.Special.Detective");
}

