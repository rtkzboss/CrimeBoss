#include "IGS_CoverPointActor.h"
#include "IGS_CoverPointComponent.h"
#include "IGS_CoverPointComponentsManager.h"
#include "Components/SceneComponent.h"

AIGS_CoverPointActor::AIGS_CoverPointActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->CoverPointComponent = CreateDefaultSubobject<UIGS_CoverPointComponent>(TEXT("CoverPointComponent"));
    this->CoverPointComponentsManager = CreateDefaultSubobject<UIGS_CoverPointComponentsManager>(TEXT("CoverPointComponentsManager"));
    this->CoverPointComponent->SetupAttachment(RootComponent);
}

UCoverPoint* AIGS_CoverPointActor::GetCoverPoint() const {
    return NULL;
}


