#include "IGS_AISpawnerData.h"
#include "IGS_AIDatabaseFPS.h"

UIGS_AISpawnerData::UIGS_AISpawnerData() {
    (*this).GroupEnvironmentQuery = nullptr;
    (*this).SniperGroupEnvironmentQuery = nullptr;
    (*this).GroupAroundActorEnvironmentQuery = nullptr;
    (*this).GuardEnvironmentQuery = nullptr;
    (*this).CivilianEnvironmentQuery = nullptr;
    (*this).CivilianGroupQuery = nullptr;
    (*this).CoverEnvironmentQuery = nullptr;
    (*this).HideMeshOnSpawnDuration = 1.000000015e-01f;
    (*this).VIPSpawnPoint = nullptr;
    (*this).BotController = nullptr;
    static ConstructorHelpers::FObjectFinder<UIGS_AIDatabaseFPS> gen0(TEXT("/Game/00_Main/Core/AI/Settings/DA_AI_Database_FPS.DA_AI_Database_FPS"));
    (*this).AIDatabaseFPS = gen0.Object;
}


