#include "IGS_ObjectiveComponent.h"

UIGS_ObjectiveComponent::UIGS_ObjectiveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ObjectiveComponentType = EIGS_ObjectiveComponentType::Default;
    this->bTimerObjective = false;
    this->Duration = 0.00f;
    this->Value = 0.00f;
    this->TaskState = EIGS_ObjectiveState::Active;
    this->CurrentCount = 0;
}

void UIGS_ObjectiveComponent::SetTaskState(EIGS_ObjectiveState inState, bool inForceMissionTaskStateChange) {
}

void UIGS_ObjectiveComponent::SetCount(int32 inCount) {
}

void UIGS_ObjectiveComponent::IncreaseCount() {
}

int32 UIGS_ObjectiveComponent::GetCurrentCount() const {
    return 0;
}

void UIGS_ObjectiveComponent::DecreaseCount() {
}

void UIGS_ObjectiveComponent::ClearCount() {
}


