#include "IGS_BTTask_SquadSearch.h"

UIGS_BTTask_SquadSearch::UIGS_BTTask_SquadSearch() {
    (*this).bDrawDebug = true;
    (*this).MaxDistance = 5.000000000e+02f;
    (*this).NodeName = TEXT("Squad Search");
}

void UIGS_BTTask_SquadSearch::OnNotifyReceived(EIGS_AINotif inType, AIGS_GameCharacterFramework* inInstigator, AIGS_GameCharacterFramework* inTarget, FVector InPos, FVector inDir) {
}


