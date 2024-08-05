#include "META_ChangeStatusPlanningBoardEvent.h"

FMETA_ChangeStatusPlanningBoardEvent::FMETA_ChangeStatusPlanningBoardEvent() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).itemTag, 0)) = NAME_None;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).voiceoverTag, 0)) = NAME_None;
    (*this).fromStatus = EMETA_PlanningBoardItemStatus::None;
    (*this).toStatus = EMETA_PlanningBoardItemStatus::None;
}

