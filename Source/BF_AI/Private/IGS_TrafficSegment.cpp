#include "IGS_TrafficSegment.h"
#include "IGS_TrafficPathComponent.h"

AIGS_TrafficSegment::AIGS_TrafficSegment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UIGS_TrafficPathComponent>(TEXT("UBF_TrafficPathComponent"));
    this->PathComponent = (UIGS_TrafficPathComponent*)RootComponent;
    this->Hidden = false;
}


