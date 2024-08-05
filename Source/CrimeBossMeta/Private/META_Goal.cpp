#include "META_Goal.h"

FMETA_Goal::FMETA_Goal() {
    (*this).Graph = nullptr;
    (*this).Title = FText::FromString(TEXT(""));
    (*this).Description = FText::FromString(TEXT(""));
    (*this).Icon = nullptr;
    (*this).Picture = nullptr;
    (*this).bIsGoalRepeatable = false;
    (*this).DaysBetweenAttempts = 0;
    (*this).MinRespectWhenGoalAvailableForPlayer = 0;
    (*this).Missions.Empty();
    (*this).Result = EMETA_GoalStatus::None;
    (*this).AssignedTasks.Empty();
    (*this).FinishedInnerTasks.Empty();
    (*this).ActionCards.Empty();
    (*this).SelectedActionCardNumber = -1;
    (*this).RespectByDefault = 0;
    (*this).InstigatorPartner = EMETA_Partner::Secretary;
    (*this).Purpose = EMETA_GoalPurpose::INVALID;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).EntitlementTag, 0)) = NAME_None;
}

