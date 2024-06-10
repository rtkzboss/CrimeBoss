#include "META_Goal.h"

FMETA_Goal::FMETA_Goal() {
    (*this).Title = FText::FromString(TEXT(""));
    (*this).Description = FText::FromString(TEXT(""));
    (*this).bIsGoalRepeatable = false;
    (*this).DaysBetweenAttempts = 0;
    (*this).MinRespectWhenGoalAvailableForPlayer = 0;
    auto& gen3445 = (*this).Missions;
    gen3445.Empty();
    (*this).Result = EMETA_GoalStatus::None;
    auto& gen3446 = (*this).AssignedTasks;
    gen3446.Empty();
    auto& gen3447 = (*this).FinishedInnerTasks;
    gen3447.Empty();
    auto& gen3448 = (*this).ActionCards;
    gen3448.Empty();
    (*this).SelectedActionCardNumber = -1;
    (*this).RespectByDefault = 0;
    (*this).InstigatorPartner = EMETA_Partner::Secretary;
    (*this).Purpose = EMETA_GoalPurpose::INVALID;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).EntitlementTag, 0)) = NAME_None;
}

