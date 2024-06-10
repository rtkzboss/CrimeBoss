#include "IGS_SquadGuard.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EIGS_TeamSideEnum.h"
#include "IGS_GuardControlRoomComponent.h"

AIGS_SquadGuard::AIGS_SquadGuard(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).GuardControlRoomComponent = CreateDefaultSubobject<UIGS_GuardControlRoomComponent>(TEXT("GuardControlRoomComponent"));
    (*this).DebugColor.B = 118;
}

UIGS_GuardControlRoomComponent* AIGS_SquadGuard::GetGuardControlRoomComponent() const {
    return NULL;
}


