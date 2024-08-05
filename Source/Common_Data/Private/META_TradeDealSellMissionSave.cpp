#include "META_TradeDealSellMissionSave.h"

FMETA_TradeDealSellMissionSave::FMETA_TradeDealSellMissionSave() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).LootTag, 0)) = NAME_None;
    (*this).LootAmount = 0;
    (*this).Price = 0;
}

