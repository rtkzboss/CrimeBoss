#include "IGS_WaveManagerWatcher.h"

AIGS_WaveManagerWatcher::AIGS_WaveManagerWatcher(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StartOnAlarm = true;
    this->TimeAfterAlarm = 30.00f;
    this->CurrentPhase = EIGS_PressurePhase::PP_Unknown;
    this->CurrentTactic = EIGS_StormTacticType::STT_None;
    this->CurrentWaveNumber = 0;
    this->CurrentSquadNumber = 0;
    this->SpawnedTotal = 0;
    this->AliveTotal = 0;
    this->DeadTotal = 0;
    this->SpawnedInWave = 0;
    this->AliveInWave = 0;
    this->DeadInWave = 0;
    this->HeistersTotal = 0;
    this->DeadHeistersTotal = 0;
    this->CurrentStorm = EIGS_StormType::ST_Low;
    this->MaxEnemyCount = 0;
    this->StormLength = 0.00f;
    this->BreakLength = 0.00f;
}


