#include "IGS_AISpawnerData.h"
#include "IGS_AIDatabaseFPS.h"

UIGS_AISpawnerData::UIGS_AISpawnerData() {
    (*this).HideMeshOnSpawnDuration = 1.000000015e-01f;
    static ConstructorHelpers::FObjectFinder<UIGS_AIDatabaseFPS> gen570(TEXT("/Game/00_Main/Core/AI/Settings/DA_AI_Database_FPS.DA_AI_Database_FPS"));
    (*this).AIDatabaseFPS = gen570.Object;
}


