#include "IGS_FirstPersonLadderAnimDatabase.h"

FIGS_FirstPersonLadderAnimDatabase::FIGS_FirstPersonLadderAnimDatabase() {
    (*this).Locomotion.IdleWalkBlendSpace = nullptr;
    (*this).Locomotion.JumpStart = nullptr;
    (*this).Locomotion.JumpLoop = nullptr;
    (*this).Locomotion.JumpEnd = nullptr;
    (*this).Locomotion.SprintStart = nullptr;
    (*this).Locomotion.SprintLoop = nullptr;
    (*this).Locomotion.SprintEnd = nullptr;
    (*this).Locomotion.SprintInterrupt = nullptr;
    (*this).Locomotion.SwingAim = nullptr;
    (*this).Locomotion.SwingCrouch = nullptr;
    (*this).Locomotion.SwingHip = nullptr;
}

