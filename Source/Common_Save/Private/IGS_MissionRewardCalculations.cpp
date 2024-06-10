#include "IGS_MissionRewardCalculations.h"

FIGS_MissionRewardCalculations::FIGS_MissionRewardCalculations() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).RowType, 0)) = NAME_None;
    (*this).Value = 0.000000000e+00f;
    (*this).Score = 0.000000000e+00f;
}

