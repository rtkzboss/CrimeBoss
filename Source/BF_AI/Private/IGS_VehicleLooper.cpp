#include "IGS_VehicleLooper.h"
#include "Components/SceneComponent.h"

AIGS_VehicleLooper::AIGS_VehicleLooper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->InitialTrafficPath = NULL;
    this->ForVehicleGroup = EIGS_VehicleSplineGroup::None;
    this->MinLoopLenght = 0.00f;
    this->MaxLoopLenght = 1000000.00f;
    this->PrefferedLoopLenght = 2000.00f;
}

void AIGS_VehicleLooper::StartLooping(AIGS_VehicleBase* Vehicle) {
}


