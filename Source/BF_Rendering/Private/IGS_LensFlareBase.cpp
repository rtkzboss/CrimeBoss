#include "IGS_LensFlareBase.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"

AIGS_LensFlareBase::AIGS_LensFlareBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->SourceBounds = CreateDefaultSubobject<USphereComponent>(TEXT("SourceBoundsComponent"));
    this->CoreMaterialDynamic = NULL;
    this->StreakMaterialDynamic = NULL;
    this->SourceBounds->SetupAttachment(RootComponent);
}



