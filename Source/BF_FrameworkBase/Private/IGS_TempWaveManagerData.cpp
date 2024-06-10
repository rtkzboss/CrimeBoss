#include "IGS_TempWaveManagerData.h"

UIGS_TempWaveManagerData::UIGS_TempWaveManagerData() {
    (*this).AssaultTime = 1.800000000e+02f;
    (*this).ControlTime = 1.800000000e+02f;
    (*this).CoolDownTime = 1.000000000e+01f;
    (*this).BuildUpTime = 1.000000000e+01f;
    (*this).StartOnAlarm = true;
    (*this).TimeAfterAlarm = 3.000000000e+01f;
    (*this).TimeBetweenWaves = 6.000000000e+01f;
    (*this).InitEnemyCount = 2;
    (*this).IncrementPerWave = 1;
    (*this).MaxSquadSize = 4;
    (*this).IncreasingWaveCount = 5;
    (*this).TotalLimit = 8;
    (*this).TotalLimitThreshold = 5.000000000e-01f;
    (*this).LargeGroup = 10;
    auto& gen261 = (*this).WaveHolders;
    gen261.Empty();
    gen261.AddDefaulted(1);
}


