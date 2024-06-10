#include "IGS_GlobalGASActor.h"
#include "IGS_GetActorByGameplayTagComponent.h"
#include "IGS_GlobalGASComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AIGS_GlobalGASActor::AIGS_GlobalGASActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).GlobalGASComponent = CreateDefaultSubobject<UIGS_GlobalGASComponent>(TEXT("GlobalGASComponent"));
    (*this).GetActorByGameplayTagComponent = CreateDefaultSubobject<UIGS_GetActorByGameplayTagComponent>(TEXT("GetActorByGameplayTagComponent"));
}

AIGS_GlobalGASActor* AIGS_GlobalGASActor::GetGlobalGASActor(UObject* inWCO) {
    return NULL;
}


