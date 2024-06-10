#include "IGS_WaveManagerData.h"

UIGS_WaveManagerData::UIGS_WaveManagerData() {
    (*this).StartOnAlarm = true;
    (*this).TimeAfterAlarm = 3.000000000e+01f;
    (*this).MinControlTime = 8.000000000e+00f;
    (*this).SpawnStopEndAssaultTime = 1.500000000e+01f;
    (*this).MaxAliveEnemiesToStartControl = 3;
    (*this).FirstSpawnDelayInAssault = 2.000000000e+01f;
    (*this).HelicopterCooldown = 3.000000000e+01f;
}


