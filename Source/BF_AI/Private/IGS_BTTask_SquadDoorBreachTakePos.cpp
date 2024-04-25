#include "IGS_BTTask_SquadDoorBreachTakePos.h"

UIGS_BTTask_SquadDoorBreachTakePos::UIGS_BTTask_SquadDoorBreachTakePos() {
    this->NodeName = TEXT("Squad Breach Take Pos");
}

void UIGS_BTTask_SquadDoorBreachTakePos::OnNotifyReceived(EIGS_AINotif Type, AIGS_GameCharacterFramework* Instigator, AIGS_GameCharacterFramework* Target, FVector Pos, FVector dir) {
}

bool UIGS_BTTask_SquadDoorBreachTakePos::IsCommandActive(UIGS_AICommand* AICommand) {
    return false;
}

UIGS_AICommand* UIGS_BTTask_SquadDoorBreachTakePos::CommandToTakePosition(AIGS_GameCharacterFramework* agent, FVector InPos, FVector inMoveLookPos, FVector inFinalLookPos, EIGS_AIMontageBreachVariant MontageVariant) {
    return NULL;
}


