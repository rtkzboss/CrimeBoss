#include "IGS_FrameworkGameDevSettings_AI.h"

UIGS_FrameworkGameDevSettings_AI::UIGS_FrameworkGameDevSettings_AI() {
    (*this).AISpawnerData = FSoftObjectPath(TEXT("/Game/00_Main/Core/AI/Spawning/DA_AISpawnerData.DA_AISpawnerData"), TEXT(""));
    (*this).AIDatabaseFPS = FSoftObjectPath(TEXT("/Game/00_Main/Core/AI/Settings/DA_AI_Database_FPS.DA_AI_Database_FPS"), TEXT(""));
    (*this).AISpawnPointData = FSoftObjectPath(TEXT("/Game/00_Main/Core/Tables/DA_AISpawnPointData.DA_AISpawnPointData"), TEXT(""));
    (*this).AISpawnPointMaterial = FSoftObjectPath(TEXT("/Game/00_Main/Core/AI/Spawning/M_SpawnPointMaterial.M_SpawnPointMaterial"), TEXT(""));
    (*this).TerritoryData = FSoftObjectPath(TEXT("/Game/00_Main/Core/AI/Spawning/DA_TerritoryData.DA_TerritoryData"), TEXT(""));
    (*this).SquadClassesHolder = FSoftObjectPath(TEXT("/Game/00_Main/Core/AI/Squads/DA_SquadClassesHolder.DA_SquadClassesHolder"), TEXT(""));
    (*this).ComplexSightClass = FSoftObjectPath(TEXT("/Script/BF_AI.IGS_AISense_ComplexSight"), TEXT(""));
    (*this).SightClass = FSoftObjectPath(TEXT("/Script/AIModule.AISense_Sight"), TEXT(""));
}


