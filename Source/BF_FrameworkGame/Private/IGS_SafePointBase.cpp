#include "IGS_SafePointBase.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "IGS_SafePointComponent.h"

AIGS_SafePointBase::AIGS_SafePointBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).SafePointComponent = CreateDefaultSubobject<UIGS_SafePointComponent>(TEXT("SafePointComponent"));
    (*this).RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
}


