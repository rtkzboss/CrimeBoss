#include "IGS_ThreatPointBase.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "IGS_ThreatPointComponent.h"

AIGS_ThreatPointBase::AIGS_ThreatPointBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).ThreatPointComponent = CreateDefaultSubobject<UIGS_ThreatPointComponent>(TEXT("ThreatPointComponent"));
    (*this).RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
}


