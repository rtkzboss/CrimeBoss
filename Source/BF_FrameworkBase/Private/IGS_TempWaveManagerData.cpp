#include "IGS_TempWaveManagerData.h"

UIGS_TempWaveManagerData::UIGS_TempWaveManagerData() {
    this->AssaultTime = 180.00f;
    this->ControlTime = 180.00f;
    this->CoolDownTime = 10.00f;
    this->BuildUpTime = 10.00f;
    this->StartOnAlarm = true;
    this->TimeAfterAlarm = 30.00f;
    this->TimeBetweenWaves = 60.00f;
    this->InitEnemyCount = 2;
    this->IncrementPerWave = 1;
    this->MaxSquadSize = 4;
    this->IncreasingWaveCount = 5;
    this->TotalLimit = 8;
    this->TotalLimitThreshold = 0.50f;
    this->LargeGroup = 10;
    this->WaveHolders.AddDefaulted(1);
}


