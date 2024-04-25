#include "IGS_CarryableBase.h"
#include "IGS_SkinHandlerBase.h"

AIGS_CarryableBase::AIGS_CarryableBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SkinHandler = CreateDefaultSubobject<UIGS_SkinHandlerBase>(TEXT("SkinHandler"));
    this->PickupClassReference = NULL;
}


