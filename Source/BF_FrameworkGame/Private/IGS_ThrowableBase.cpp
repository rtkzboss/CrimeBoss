#include "IGS_ThrowableBase.h"
#include "IGS_SkinHandlerBase.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AIGS_ThrowableBase::AIGS_ThrowableBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).SkinHandler = CreateDefaultSubobject<UIGS_SkinHandlerBase>(TEXT("SkinHandler"));
    (*this).PrimaryActorTick.bStartWithTickEnabled = false;
}

void AIGS_ThrowableBase::OnThrowStart_Implementation(bool inLow) {
}

void AIGS_ThrowableBase::OnThrowFinish_Implementation(bool inLow) {
}

void AIGS_ThrowableBase::OnThrowCancel_Implementation(bool inLow) {
}

void AIGS_ThrowableBase::OnDebugSettingsChanged() {
}


