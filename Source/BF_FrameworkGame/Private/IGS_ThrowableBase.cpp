#include "IGS_ThrowableBase.h"
#include "IGS_SkinHandlerBase.h"

AIGS_ThrowableBase::AIGS_ThrowableBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SkinHandler = CreateDefaultSubobject<UIGS_SkinHandlerBase>(TEXT("SkinHandler"));
    this->LoadedProjectileClass = NULL;
}

void AIGS_ThrowableBase::OnThrowStart_Implementation(bool inLow) {
}

void AIGS_ThrowableBase::OnThrowFinish_Implementation(bool inLow) {
}

void AIGS_ThrowableBase::OnThrowCancel_Implementation(bool inLow) {
}

void AIGS_ThrowableBase::OnDebugSettingsChanged() {
}


