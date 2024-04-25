#include "IGS_MovingLaserTrap.h"
#include "Components/ArrowComponent.h"
#include "Components/SceneComponent.h"

AIGS_MovingLaserTrap::AIGS_MovingLaserTrap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ExtraRootObject"));
    this->ExtraRootObject = (USceneComponent*)RootComponent;
    this->RootObjectEnd = CreateDefaultSubobject<UArrowComponent>(TEXT("TransitEndPosition"));
    this->RootObjectEnd->SetupAttachment(RootComponent);
}

void AIGS_MovingLaserTrap::TickTimelineUpdate(float InValue) {
}

void AIGS_MovingLaserTrap::TickTimelineFinished() {
}


