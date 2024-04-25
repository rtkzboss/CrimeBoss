#include "IGS_GuardControlRoomComponent.h"

UIGS_GuardControlRoomComponent::UIGS_GuardControlRoomComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CloseGuardEQS = NULL;
    this->AnyGuardEQS = NULL;
}


