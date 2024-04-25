#include "IGS_ControlRoomBase.h"

AIGS_ControlRoomBase::AIGS_ControlRoomBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

UIGS_GuardControlRoomComponentBase* AIGS_ControlRoomBase::GetGuardSquadControlRoomComponent() const {
    return NULL;
}


