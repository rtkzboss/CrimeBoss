#include "META_BMActiveEventLootData.h"

FMETA_BMActiveEventLootData::FMETA_BMActiveEventLootData() {
    (*this).Vendor = EMETA_TradeVendor::UNDEFINED;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).LootTag, 0)) = NAME_None;
    (*this).MinLootValue = 0;
    (*this).MissionID = nullptr;
}

