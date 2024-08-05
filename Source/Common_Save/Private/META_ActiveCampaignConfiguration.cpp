#include "META_ActiveCampaignConfiguration.h"

FMETA_ActiveCampaignConfiguration::FMETA_ActiveCampaignConfiguration() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).CampaignMode, 0)) = NAME_None;
    (*this).Difficulty = EIGS_UserDifficulty::UD_Unknown;
}

