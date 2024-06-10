#include "META_StoryGoalTableRow.h"

FMETA_StoryGoalTableRow::FMETA_StoryGoalTableRow() {
    (*this).Graph = nullptr;
    (*this).Title = FText::FromString(TEXT(""));
    (*this).Description = FText::FromString(TEXT(""));
    (*this).Icon = nullptr;
    (*this).Picture = nullptr;
    (*this).bIsGoalRepeatable = false;
    (*this).DaysBetweenAttempts = 1;
    (*this).Missions.Empty();
    (*this).ActionCardsGoal.Empty();
    (*this).RespectByDefault = 0;
    (*this).UseLockRespectCondition = false;
    (*this).UnlockRespect = EMETA_RespectLvl::Low;
    (*this).LockRespect = EMETA_RespectLvl::Low;
    (*this).InstigatorPartner = EMETA_Partner::Secretary;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).EntitlementTag, 0)) = NAME_None;
}

