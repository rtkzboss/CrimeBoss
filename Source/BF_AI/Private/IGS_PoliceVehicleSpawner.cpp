#include "IGS_PoliceVehicleSpawner.h"

AIGS_PoliceVehicleSpawner::AIGS_PoliceVehicleSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSpawnAfterAlarmed = false;
}

void AIGS_PoliceVehicleSpawner::OnAlarmed(EIGS_AlarmReason inReason) {
}


