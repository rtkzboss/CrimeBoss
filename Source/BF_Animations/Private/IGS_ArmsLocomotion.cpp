#include "IGS_ArmsLocomotion.h"

FIGS_ArmsLocomotion::FIGS_ArmsLocomotion() {
    (*this).IdleWalkBlendSpace = nullptr;
    (*this).JumpStart = nullptr;
    (*this).JumpLoop = nullptr;
    (*this).JumpEnd = nullptr;
    (*this).SprintStart = nullptr;
    (*this).SprintLoop = nullptr;
    (*this).SprintEnd = nullptr;
    (*this).SprintInterrupt = nullptr;
    (*this).SwingAim = nullptr;
    (*this).SwingCrouch = nullptr;
    (*this).SwingHip = nullptr;
}

