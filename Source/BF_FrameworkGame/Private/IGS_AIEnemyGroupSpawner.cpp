#include "IGS_AIEnemyGroupSpawner.h"
#include "Components/SceneComponent.h"

AIGS_AIEnemyGroupSpawner::AIGS_AIEnemyGroupSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->TeamSide = EIGS_TeamSideEnum::TS_Unknown;
    this->AllowedSpecialTypes = 157;
    this->IsActive = true;
    this->AutomaticStart = true;
    this->AutomaticStartDelay = 0.20f;
    this->ChooseRandomPointEveryTime = false;
    this->ChooseRandomPointIfOverflow = false;
    this->Amount = 0;
    this->Random = 0;
    this->bDifficultyMigrated = false;
    this->CoolDownTime = 4.00f;
    this->LastUsedTimestamp = 0.00f;
}

void AIGS_AIEnemyGroupSpawner::SpawnGroupParametrizedWithSpecializations(EIGS_TeamSideEnum inTeamSide, uint8 inUnitVariation, const TArray<EIGS_UnitSpecialization>& inUnitSpecializations) {
}

void AIGS_AIEnemyGroupSpawner::SpawnGroupParametrized(EIGS_TeamSideEnum inTeamSide, uint8 inUnitVariation) {
}

void AIGS_AIEnemyGroupSpawner::SpawnGroup() {
}

void AIGS_AIEnemyGroupSpawner::OverwriteSpawnAmount(const int32 inEasyMin, const int32 inEasyMax, const int32 inMediumMin, const int32 inMediumMax, const int32 inHardMin, const int32 inHardMax) {
}


