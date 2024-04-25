#include "IGS_VehicleGenerator.h"
#include "Components/SceneComponent.h"

AIGS_VehicleGenerator::AIGS_VehicleGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->FirstDelayInSeconds = 0.00f;
    this->SpawnFrequencyMinRangeInSeconds = 10.00f;
    this->SpawnFrequencyMaxRangeInSeconds = 10.00f;
    this->bUseMaxSpeedRandomizer = false;
    this->CarMaxSpeedMaxRangeValue = 600.00f;
    this->CarMaxSpeedMinRangeValue = 400.00f;
}

void AIGS_VehicleGenerator::OnVehicleDriveFinished(AIGS_VehicleBase* inVehicle) {
}

void AIGS_VehicleGenerator::OnAlarmed(EIGS_AlarmReason inReason) {
}


