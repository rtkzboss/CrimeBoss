#include "META_CampaignModeMapping.h"

FMETA_CampaignModeMapping::FMETA_CampaignModeMapping() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).CampaignModeTag, 0)) = NAME_None;
    (*this).MatchingData.Empty();
}

