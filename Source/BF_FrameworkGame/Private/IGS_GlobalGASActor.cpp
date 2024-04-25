#include "IGS_GlobalGASActor.h"
#include "IGS_GetActorByGameplayTagComponent.h"
#include "IGS_GlobalGASComponent.h"

AIGS_GlobalGASActor::AIGS_GlobalGASActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GlobalGASComponent = CreateDefaultSubobject<UIGS_GlobalGASComponent>(TEXT("GlobalGASComponent"));
    this->GlobalGASAttributeSet = NULL;
    this->GetActorByGameplayTagComponent = CreateDefaultSubobject<UIGS_GetActorByGameplayTagComponent>(TEXT("GetActorByGameplayTagComponent"));
}

AIGS_GlobalGASActor* AIGS_GlobalGASActor::GetGlobalGASActor(UObject* inWCO) {
    return NULL;
}


