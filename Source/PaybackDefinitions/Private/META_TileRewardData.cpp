#include "META_TileRewardData.h"

FMETA_TileRewardData::FMETA_TileRewardData() {
    (*this).RewardType = EMETA_TileReward::None;
    (*this).Value = 0.000000000e+00f;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).LootItem, 0)) = NAME_None;
    (*this).WeaponQuality = EMETA_ItemQuality::None;
    (*this).Weapons.Empty();
}

