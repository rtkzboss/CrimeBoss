#include "IGS_TrafficSegment.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "IGS_TrafficPathComponent.h"

AIGS_TrafficSegment::AIGS_TrafficSegment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PathComponent = CreateDefaultSubobject<UIGS_TrafficPathComponent>(TEXT("UBF_TrafficPathComponent"));
    (*this).RootComponent = (USceneComponent*)PathComponent;
}


