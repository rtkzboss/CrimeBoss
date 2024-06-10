#include "IGS_RotatingLaserTrap.h"
#include "Components/ArrowComponent.h"
#include "Components/SceneComponent.h"

AIGS_RotatingLaserTrap::AIGS_RotatingLaserTrap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ExtraRootObject"));
    this->ExtraRootObject = (USceneComponent*)RootComponent;
    this->RotationStartPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("RotationStartPoint"));
    this->RotationEndPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("RotationEndPoint"));
    this->Reverse = false;
    this->Looping = true;
    this->RotationStartPoint->SetupAttachment(RootComponent);
    this->RotationEndPoint->SetupAttachment(RootComponent);
}

void AIGS_RotatingLaserTrap::TickTimelineUpdate(float InValue) {
}

void AIGS_RotatingLaserTrap::TickTimelineFinished() {
}


