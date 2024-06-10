#include "IGS_SearchPointBase.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "IGS_SearchPointComponent.h"

AIGS_SearchPointBase::AIGS_SearchPointBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).SearchPointComponent = CreateDefaultSubobject<UIGS_SearchPointComponent>(TEXT("SearchPointComponent"));
    (*this).RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
}


