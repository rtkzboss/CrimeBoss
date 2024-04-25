#include "IGS_SafePointBase.h"
#include "Components/SceneComponent.h"
#include "IGS_SafePointComponent.h"

AIGS_SafePointBase::AIGS_SafePointBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->SafePointComponent = CreateDefaultSubobject<UIGS_SafePointComponent>(TEXT("SafePointComponent"));
}


