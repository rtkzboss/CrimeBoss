#include "IGS_SquadGuard.h"
#include "IGS_GuardControlRoomComponent.h"

AIGS_SquadGuard::AIGS_SquadGuard(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GuardControlRoomComponent = CreateDefaultSubobject<UIGS_GuardControlRoomComponent>(TEXT("GuardControlRoomComponent"));
}

UIGS_GuardControlRoomComponent* AIGS_SquadGuard::GetGuardControlRoomComponent() const {
    return NULL;
}


