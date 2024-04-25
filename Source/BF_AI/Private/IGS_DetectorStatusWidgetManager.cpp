#include "IGS_DetectorStatusWidgetManager.h"

UIGS_DetectorStatusWidgetManager::UIGS_DetectorStatusWidgetManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DetectorPawn = NULL;
    this->IsDetecting = false;
    this->WalkieTalkieStatus = EIGS_WalkieTalkieStatus::WalkieTalkie_None;
    this->Target = NULL;
}


