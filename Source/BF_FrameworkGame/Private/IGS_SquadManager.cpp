#include "IGS_SquadManager.h"
#include "IGS_SquadClassesHolder.h"

UIGS_SquadManager::UIGS_SquadManager() {
    static ConstructorHelpers::FObjectFinder<UIGS_SquadClassesHolder> gen627(TEXT("/Game/00_Main/Core/AI/Squads/DA_SquadClassesHolder.DA_SquadClassesHolder"));
    (*this).SquadClassesHolder = gen627.Object;
}

UIGS_SquadManager* UIGS_SquadManager::Instance(const UObject* inWCO) {
    return NULL;
}

AIGS_SquadFramework* UIGS_SquadManager::GetSquadFromID(int32 inSquadID) {
    return NULL;
}

AIGS_SquadFramework* UIGS_SquadManager::AddSquad(EIGS_TeamSideEnum inTeamSide, EIGS_UnitSpecialization inSpecialization) {
    return NULL;
}


