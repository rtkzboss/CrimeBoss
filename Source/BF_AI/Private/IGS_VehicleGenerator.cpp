#include "IGS_VehicleGenerator.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"

AIGS_VehicleGenerator::AIGS_VehicleGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).SpawnFrequencyMinRangeInSeconds = 1.000000000e+01f;
    (*this).SpawnFrequencyMaxRangeInSeconds = 1.000000000e+01f;
    (*this).CarMaxSpeedMaxRangeValue = 6.000000000e+02f;
    (*this).CarMaxSpeedMinRangeValue = 4.000000000e+02f;
    (*this).RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
}

void AIGS_VehicleGenerator::OnVehicleDriveFinished(AIGS_VehicleBase* inVehicle) {
}

void AIGS_VehicleGenerator::OnAlarmed(EIGS_AlarmReason inReason) {
}


