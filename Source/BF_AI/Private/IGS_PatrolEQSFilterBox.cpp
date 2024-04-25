#include "IGS_PatrolEQSFilterBox.h"

AIGS_PatrolEQSFilterBox::AIGS_PatrolEQSFilterBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGenerateOverlapEvents = false;
    this->bDisableShapeSelection = true;
    this->FiltersByTeamSide = false;
    this->ValidTeamSides = 0;
}

void AIGS_PatrolEQSFilterBox::UpdateDebugSubsystemSettings() {
}


