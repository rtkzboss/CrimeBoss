#include "IGS_PlayerControllerFramework.h"

AIGS_PlayerControllerFramework::AIGS_PlayerControllerFramework(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->CurrentPawn = NULL;
}

void AIGS_PlayerControllerFramework::SetShowCrosshair(bool inShowCrosshair) const {
}




