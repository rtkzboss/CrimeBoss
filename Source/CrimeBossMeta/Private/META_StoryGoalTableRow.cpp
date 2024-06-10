#include "META_StoryGoalTableRow.h"

FMETA_StoryGoalTableRow::FMETA_StoryGoalTableRow() {
    (*this).Title = FText::FromString(TEXT(""));
    (*this).Description = FText::FromString(TEXT(""));
    (*this).bIsGoalRepeatable = false;
    (*this).DaysBetweenAttempts = 1;
    auto& gen3438 = (*this).Missions;
    gen3438.Empty();
    auto& gen3439 = (*this).ActionCardsGoal;
    gen3439.Empty();
    (*this).RespectByDefault = 0;
    (*this).UseLockRespectCondition = false;
    (*this).UnlockRespect = EMETA_RespectLvl::Low;
    (*this).LockRespect = EMETA_RespectLvl::Low;
    (*this).InstigatorPartner = EMETA_Partner::Secretary;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).EntitlementTag, 0)) = NAME_None;
}

