#include "IGS_PanicPointBase.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "IGS_PanicPointComponent.h"

AIGS_PanicPointBase::AIGS_PanicPointBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PanicPointComponent = CreateDefaultSubobject<UIGS_PanicPointComponent>(TEXT("PanicPointComponent"));
    (*this).RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
}


