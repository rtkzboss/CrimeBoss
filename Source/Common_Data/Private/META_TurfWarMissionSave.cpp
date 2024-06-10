#include "META_TurfWarMissionSave.h"

FMETA_TurfWarMissionSave::FMETA_TurfWarMissionSave() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).WarTile, 0)) = NAME_None;
    (*this).EnemyGang = EMETA_Gang::None;
    (*this).PlayersSoldiersAmount = 0;
    (*this).DefenceLostPenaltyMultiplier = 0.000000000e+00f;
}

