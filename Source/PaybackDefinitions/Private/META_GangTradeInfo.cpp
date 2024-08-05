#include "META_GangTradeInfo.h"

FMETA_GangTradeInfo::FMETA_GangTradeInfo() {
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).BannedCommodities, 0)).Empty();
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).BannedCommodities, 0)).Empty();
    (*this).DayCooldownAfterFailTrade = 0;
}

