#include "IGS_SearchPointBase.h"
#include "Components/SceneComponent.h"
#include "IGS_SearchPointComponent.h"

AIGS_SearchPointBase::AIGS_SearchPointBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->SearchPointComponent = CreateDefaultSubobject<UIGS_SearchPointComponent>(TEXT("SearchPointComponent"));
}


