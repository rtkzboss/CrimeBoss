#include "IGS_ControlRoomBase.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AIGS_ControlRoomBase::AIGS_ControlRoomBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

UIGS_GuardControlRoomComponentBase* AIGS_ControlRoomBase::GetGuardSquadControlRoomComponent() const {
    return NULL;
}


