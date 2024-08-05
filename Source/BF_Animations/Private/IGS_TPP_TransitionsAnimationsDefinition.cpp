#include "IGS_TPP_TransitionsAnimationsDefinition.h"

FIGS_TPP_TransitionsAnimationsDefinition::FIGS_TPP_TransitionsAnimationsDefinition() {
    (*this).TransitionToWalkL = nullptr;
    (*this).TransitionToWalkCrouchL = nullptr;
    (*this).TransitionToWalkR = nullptr;
    (*this).TransitionToWalkCrouchR = nullptr;
    (*this).TransitionToIdleL = nullptr;
    (*this).TransitionToIdleR = nullptr;
    (*this).TransitionToIdleL_Crouch = nullptr;
    (*this).TransitionToIdleR_Crouch = nullptr;
}

