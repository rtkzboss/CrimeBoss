#include "META_CampaignScreenTutorial.h"

FMETA_CampaignScreenTutorial::FMETA_CampaignScreenTutorial() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).screenTag, 0)) = NAME_None;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).TutorialID, 0)) = NAME_None;
    (*this).ShowEvenFinished = false;
}

