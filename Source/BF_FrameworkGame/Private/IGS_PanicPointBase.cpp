#include "IGS_PanicPointBase.h"
#include "Components/SceneComponent.h"
#include "IGS_PanicPointComponent.h"

AIGS_PanicPointBase::AIGS_PanicPointBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->PanicPointComponent = CreateDefaultSubobject<UIGS_PanicPointComponent>(TEXT("PanicPointComponent"));
}


