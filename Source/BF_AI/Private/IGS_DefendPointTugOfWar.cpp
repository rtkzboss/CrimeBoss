#include "IGS_DefendPointTugOfWar.h"

AIGS_DefendPointTugOfWar::AIGS_DefendPointTugOfWar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AdvancePoint = NULL;
    this->RetreatPoint = NULL;
}

void AIGS_DefendPointTugOfWar::Retreat(EIGS_TeamSideEnum inTeamSideToAdvance, int32 inScope, EIGS_Speed inSpeed, bool inCrouch) {
}

void AIGS_DefendPointTugOfWar::Advance(EIGS_TeamSideEnum inTeamSideToAdvance, int32 inScope, EIGS_Speed inSpeed, bool inCrouch) {
}


