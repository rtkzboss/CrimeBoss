#include "IGS_LensFlareBase.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"

AIGS_LensFlareBase::AIGS_LensFlareBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));
    (*this).SourceBounds = CreateDefaultSubobject<USphereComponent>(TEXT("SourceBoundsComponent"));
    (*this).PrimaryActorTick.bStartWithTickEnabled = false;
    (*this).RootComponent = (USceneComponent*)SceneComponent;
    (*this).SourceBounds->SetupAttachment((*this).SceneComponent);
}



