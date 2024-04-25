#include "IGS_TransitionHandlerBaseComponent.h"

UIGS_TransitionHandlerBaseComponent::UIGS_TransitionHandlerBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AngleToStartTransition = 4.00f;
    this->DistToStartTransition = 5.00f;
    this->m_State = EIGS_TransitionState::None;
}


