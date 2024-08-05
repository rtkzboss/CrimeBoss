#include "IGS_DialogueCharacterCooldownData.h"

FIGS_DialogueCharacterCooldownData::FIGS_DialogueCharacterCooldownData() {
    (*this).StealthCooldown = EIGS_DialogueCharacterCooldown::Long;
    (*this).LimboCooldown = EIGS_DialogueCharacterCooldown::Medium;
    (*this).ControlCooldown = EIGS_DialogueCharacterCooldown::Medium;
    (*this).AssaultCooldown = EIGS_DialogueCharacterCooldown::Short;
}

