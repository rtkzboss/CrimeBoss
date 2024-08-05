#include "IGS_DefendPointBase.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EIGS_ScenarioDifficulty.h"

AIGS_DefendPointBase::AIGS_DefendPointBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).OverrideCapacity = -1;
    (*this).RotationType = EIGS_DefendPointRotationType::TS_AllignWithForward;
    (*this).PrimaryActorTick.bCanEverTick = true;
    (*this).PrimaryActorTick.TickInterval = 3.000000119e-01f;
}

void AIGS_DefendPointBase::SetDefendRotationPoint(FVector Pos) {
}

bool AIGS_DefendPointBase::IsInDefenedArea(FVector position) const {
    return false;
}

FVector AIGS_DefendPointBase::GetDefendLookAtPosition(FVector querrierPos) const {
    return FVector{};
}

TArray<AIGS_GameCharacterFramework*> AIGS_DefendPointBase::GetDefendingCharacters(EIGS_TeamSideEnum inTeamSide) {
    return TArray<AIGS_GameCharacterFramework*>();
}

TArray<AIGS_GameCharacterFramework*> AIGS_DefendPointBase::GetCharactersInside(EIGS_TeamSideEnum inTeamSide) {
    return TArray<AIGS_GameCharacterFramework*>();
}

TArray<AIGS_GameCharacterFramework*> AIGS_DefendPointBase::GetArrivingCharacters(EIGS_TeamSideEnum inTeamSide) {
    return TArray<AIGS_GameCharacterFramework*>();
}

TArray<AIGS_GameCharacterFramework*> AIGS_DefendPointBase::GetAllDefendingCharacters() {
    return TArray<AIGS_GameCharacterFramework*>();
}

TArray<AIGS_GameCharacterFramework*> AIGS_DefendPointBase::GetAllCharactersInside() {
    return TArray<AIGS_GameCharacterFramework*>();
}

TArray<AIGS_GameCharacterFramework*> AIGS_DefendPointBase::GetAllArrivingCharacters() {
    return TArray<AIGS_GameCharacterFramework*>();
}


