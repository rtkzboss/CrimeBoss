#include "IGS_BTTask_SquadSearch.h"

UIGS_BTTask_SquadSearch::UIGS_BTTask_SquadSearch() {
    this->NodeName = TEXT("Squad Search");
    this->bDrawDebug = true;
    this->MaxDistance = 500.00f;
    this->bMovingToPlayer = false;
}

void UIGS_BTTask_SquadSearch::OnNotifyReceived(EIGS_AINotif inType, AIGS_GameCharacterFramework* inInstigator, AIGS_GameCharacterFramework* inTarget, FVector InPos, FVector inDir) {
}


