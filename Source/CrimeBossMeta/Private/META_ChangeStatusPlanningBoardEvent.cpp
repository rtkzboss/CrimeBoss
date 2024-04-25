#include "META_ChangeStatusPlanningBoardEvent.h"

FMETA_ChangeStatusPlanningBoardEvent::FMETA_ChangeStatusPlanningBoardEvent() {
    this->fromStatus = EMETA_PlanningBoardItemStatus::None;
    this->toStatus = EMETA_PlanningBoardItemStatus::None;
}

