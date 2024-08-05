#include "IGS_DialogueHeisterCharacterRow.h"
#include "EIGS_DialogueCharacterCooldown.h"

FIGS_DialogueHeisterCharacterRow::FIGS_DialogueHeisterCharacterRow() {
    (*this).ID = EIGS_DialogueHeisterCharacter::None;
    (*this).SpeechScore = 1.000000000e+01f;
    (*this).CooldownData.StealthCooldown = EIGS_DialogueCharacterCooldown::Long;
    (*this).CooldownData.LimboCooldown = EIGS_DialogueCharacterCooldown::Medium;
    (*this).CooldownData.ControlCooldown = EIGS_DialogueCharacterCooldown::Medium;
    (*this).CooldownData.AssaultCooldown = EIGS_DialogueCharacterCooldown::Short;
}

