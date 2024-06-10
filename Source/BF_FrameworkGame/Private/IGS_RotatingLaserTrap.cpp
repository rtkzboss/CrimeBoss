#include "IGS_RotatingLaserTrap.h"
#include "Components/ArrowComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"

AIGS_RotatingLaserTrap::AIGS_RotatingLaserTrap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).ExtraRootObject = CreateDefaultSubobject<USceneComponent>(TEXT("ExtraRootObject"));
    (*this).RotationStartPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("RotationStartPoint"));
    (*this).RotationEndPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("RotationEndPoint"));
    (*this).Looping = true;
    (*this).RootComponent = (USceneComponent*)ExtraRootObject;
    (*this).RotationStartPoint->SetupAttachment((*this).ExtraRootObject);
    (*this).RotationEndPoint->SetupAttachment((*this).ExtraRootObject);
}

void AIGS_RotatingLaserTrap::TickTimelineUpdate(float InValue) {
}

void AIGS_RotatingLaserTrap::TickTimelineFinished() {
}


