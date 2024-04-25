#include "IGS_SquadFramework.h"

AIGS_SquadFramework::AIGS_SquadFramework(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bOnlyRelevantToOwner = true;
    this->bNetLoadOnClient = false;
    this->SquadID = -1;
}

void AIGS_SquadFramework::SetTeamSide(const EIGS_TeamSideEnum inTeamSide) {
}

EIGS_TeamSideEnum AIGS_SquadFramework::GetTeamSide() const {
    return EIGS_TeamSideEnum::TS_Heisters;
}

TArray<AIGS_GameCharacterFramework*> AIGS_SquadFramework::GetSquadMembers() const {
    return TArray<AIGS_GameCharacterFramework*>();
}

int32 AIGS_SquadFramework::GetSquadID() const {
    return 0;
}

int32 AIGS_SquadFramework::GetMemberCount() const {
    return 0;
}

int32 AIGS_SquadFramework::GetAliveMemberCount() const {
    return 0;
}


