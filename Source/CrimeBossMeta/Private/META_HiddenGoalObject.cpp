#include "META_HiddenGoalObject.h"
#include "Templates/SubclassOf.h"

UMETA_HiddenGoalObject::UMETA_HiddenGoalObject() {
    this->ID = NULL;
    this->CurrentValue = 0;
    this->NeedValue = 1;
    this->bSuccess = false;
    this->bRewardReceived = false;
}

void UMETA_HiddenGoalObject::Setup_Implementation(AGameModeBase* inGameModeBase, TSubclassOf<UMETA_HiddenGoalID> inID, int32 inCurrentValue, bool inSuccess, bool inRewardReceived) {
}

void UMETA_HiddenGoalObject::GetTaskInfo_Implementation(FText& Task) {
}

FMETA_HiddenGoalsSaveInfo UMETA_HiddenGoalObject::GetSaveData() {
    return FMETA_HiddenGoalsSaveInfo{};
}


