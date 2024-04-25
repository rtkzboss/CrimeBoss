#include "IGS_CameraComponentBase.h"

UIGS_CameraComponentBase::UIGS_CameraComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

TArray<EIGS_PostProcessType> UIGS_CameraComponentBase::GetGlobalPostProcesses() const {
    return TArray<EIGS_PostProcessType>();
}

void UIGS_CameraComponentBase::AddGlobalPostProcessType(TArray<EIGS_PostProcessType> inPostProcessTypesArray) {
}


