#include "IGS_GlobalPostProcessSubsystem.h"

UIGS_GlobalPostProcessSubsystem::UIGS_GlobalPostProcessSubsystem() {
    this->m_GloballyAppliedPostProcesses = NULL;
}

void UIGS_GlobalPostProcessSubsystem::RemovePostProcessesFromCamera(UCameraComponent* inCamera, TArray<EIGS_PostProcessType> inPostProcessesTypes) {
}

UIGS_GlobalPostProcessSubsystem* UIGS_GlobalPostProcessSubsystem::Instance(const UObject* inWCO) {
    return NULL;
}

void UIGS_GlobalPostProcessSubsystem::ApplyPostProcessesToCamera(UCameraComponent* inCamera, TArray<EIGS_PostProcessType> inPostProcessesTypes) {
}


