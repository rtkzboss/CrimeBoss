#include "IGS_SentryControllerPlayerBase.h"

AIGS_SentryControllerPlayerBase::AIGS_SentryControllerPlayerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUsePitch = false;
    this->bUseYaw = true;
    this->PossedPawn = NULL;
    this->PlayerController = NULL;
    this->CurrentYaw = 0.00f;
    this->CurrentPitch = 0.00f;
}


