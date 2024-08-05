#include "IGS_AISpawnPoint.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AIGS_AISpawnPoint::AIGS_AISpawnPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).IsActive = true;
    (*this).AutomaticStartDelay = 2.000000030e-01f;
    (*this).TeamSideOverride = EIGS_TeamSideEnum::TS_Unknown;
    (*this).GoToScope = 255;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).SpawnAnimTag, 0)) = TEXT("Anim.Spawn.None");
    (*this).SquadID = -1;
    (*this).CanBeSeen = true;
}

void AIGS_AISpawnPoint::SpawnUnitParametrized(EIGS_TeamSideEnum inTeamSide, uint8 inUnitVariation, EIGS_UnitSpecialization inUnitSpecialization) {
}

void AIGS_AISpawnPoint::SpawnUnit() {
}



