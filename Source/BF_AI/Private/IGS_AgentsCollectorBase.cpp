#include "IGS_AgentsCollectorBase.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AIGS_AgentsCollectorBase::AIGS_AgentsCollectorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

TArray<AIGS_GameCharacterFramework*> AIGS_AgentsCollectorBase::Collect(EIGS_TeamSideEnum TeamSide) const {
    return TArray<AIGS_GameCharacterFramework*>();
}


