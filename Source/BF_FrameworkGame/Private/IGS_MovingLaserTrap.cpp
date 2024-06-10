#include "IGS_MovingLaserTrap.h"
#include "Components/ArrowComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"

AIGS_MovingLaserTrap::AIGS_MovingLaserTrap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).ExtraRootObject = CreateDefaultSubobject<USceneComponent>(TEXT("ExtraRootObject"));
    (*this).RootObjectEnd = CreateDefaultSubobject<UArrowComponent>(TEXT("TransitEndPosition"));
    (*this).RootComponent = (USceneComponent*)ExtraRootObject;
    (*this).RootObjectEnd->SetupAttachment((*this).ExtraRootObject);
}

void AIGS_MovingLaserTrap::TickTimelineUpdate(float InValue) {
}

void AIGS_MovingLaserTrap::TickTimelineFinished() {
}


