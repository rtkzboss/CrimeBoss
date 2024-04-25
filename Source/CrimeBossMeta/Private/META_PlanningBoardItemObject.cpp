#include "META_PlanningBoardItemObject.h"

UMETA_PlanningBoardItemObject::UMETA_PlanningBoardItemObject() {
}

void UMETA_PlanningBoardItemObject::SetStatus(EMETA_PlanningBoardItemStatus NewStatus) {
}

void UMETA_PlanningBoardItemObject::SetData(FMETA_PlanningBoardItemRow& itemData, EMETA_PlanningBoardItemStatus Status) {
}

EMETA_PlanningBoardItemStatus UMETA_PlanningBoardItemObject::GetStatus() const {
    return EMETA_PlanningBoardItemStatus::None;
}

FMETA_PlanningBoardItemRow UMETA_PlanningBoardItemObject::GetData() const {
    return FMETA_PlanningBoardItemRow{};
}


