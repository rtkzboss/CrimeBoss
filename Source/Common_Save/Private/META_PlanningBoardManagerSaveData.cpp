#include "META_PlanningBoardManagerSaveData.h"

FMETA_PlanningBoardManagerSaveData::FMETA_PlanningBoardManagerSaveData() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ActivePlanningBoardTag, 0)) = NAME_None;
}

