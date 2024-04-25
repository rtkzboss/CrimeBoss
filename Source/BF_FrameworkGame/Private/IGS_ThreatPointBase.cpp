#include "IGS_ThreatPointBase.h"
#include "Components/SceneComponent.h"
#include "IGS_ThreatPointComponent.h"

AIGS_ThreatPointBase::AIGS_ThreatPointBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->ThreatPointComponent = CreateDefaultSubobject<UIGS_ThreatPointComponent>(TEXT("ThreatPointComponent"));
}


