#include "META_CampaignModeMapping.h"

FMETA_CampaignModeMapping::FMETA_CampaignModeMapping() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).CampaignModeTag, 0)) = NAME_None;
    auto& gen1711 = (*this).MatchingData;
    gen1711.Empty();
}

