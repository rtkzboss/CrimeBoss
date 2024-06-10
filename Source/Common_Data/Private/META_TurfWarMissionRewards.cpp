#include "META_TurfWarMissionRewards.h"

FMETA_TurfWarMissionRewards::FMETA_TurfWarMissionRewards() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).LootType, 0)) = NAME_None;
    (*this).LootAmount = 0;
    (*this).MoneyAmount = 0;
    (*this).SoldiersAmount = 0;
    (*this).Weapons.Empty();
    (*this).isFilledIn = false;
}

