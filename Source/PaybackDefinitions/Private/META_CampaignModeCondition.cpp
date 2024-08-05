#include "META_CampaignModeCondition.h"

FMETA_CampaignModeCondition::FMETA_CampaignModeCondition() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ConditionalTag, 0)) = NAME_None;
    (*this).Operator = EMETA_ConditionOperator::Greater;
    (*this).Value = 0;
}

