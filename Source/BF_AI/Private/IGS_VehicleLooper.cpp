#include "IGS_VehicleLooper.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"

AIGS_VehicleLooper::AIGS_VehicleLooper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).MaxLoopLenght = 1.000000000e+06f;
    (*this).PrefferedLoopLenght = 2.000000000e+03f;
    (*this).RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
}

void AIGS_VehicleLooper::StartLooping(AIGS_VehicleBase* Vehicle) {
}


