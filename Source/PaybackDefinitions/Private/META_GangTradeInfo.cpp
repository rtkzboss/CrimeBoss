#include "META_GangTradeInfo.h"

FMETA_GangTradeInfo::FMETA_GangTradeInfo() {
    auto& gen1733 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).BannedCommodities, 0));
    gen1733.Empty();
    auto& gen1734 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).BannedCommodities, 0));
    gen1734.Empty();
    (*this).DayCooldownAfterFailTrade = 0;
}

