#include "IGS_WaveManagerData.h"

UIGS_WaveManagerData::UIGS_WaveManagerData() {
    this->StartOnAlarm = true;
    this->TimeAfterAlarm = 30.00f;
    this->MinControlTime = 8.00f;
    this->SpawnStopEndAssaultTime = 15.00f;
    this->MaxAliveEnemiesToStartControl = 3;
    this->FirstSpawnDelayInAssault = 20.00f;
    this->HelicopterCooldown = 30.00f;
}


