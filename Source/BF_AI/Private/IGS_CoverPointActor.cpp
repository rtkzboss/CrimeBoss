#include "IGS_CoverPointActor.h"
#include "IGS_CoverPointComponent.h"
#include "IGS_CoverPointComponentsManager.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "EIGS_ScenarioDifficulty.h"
#include "EIGS_TeamSideEnum.h"

AIGS_CoverPointActor::AIGS_CoverPointActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).CoverPointComponent = CreateDefaultSubobject<UIGS_CoverPointComponent>(TEXT("CoverPointComponent"));
    (*this).CoverPointComponentsManager = CreateDefaultSubobject<UIGS_CoverPointComponentsManager>(TEXT("CoverPointComponentsManager"));
    (*this).RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    (*this).CoverPointComponent->SetupAttachment((*this).RootComponent);
}

UCoverPoint* AIGS_CoverPointActor::GetCoverPoint() const {
    return NULL;
}


