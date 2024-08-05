#include "IGS_CarryableBase.h"
#include "IGS_SkinHandlerBase.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AIGS_CarryableBase::AIGS_CarryableBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).SkinHandler = CreateDefaultSubobject<UIGS_SkinHandlerBase>(TEXT("SkinHandler"));
}


