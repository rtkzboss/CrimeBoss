#include "IGS_DialogueCharacterCooldownData.h"

FIGS_DialogueCharacterCooldownData::FIGS_DialogueCharacterCooldownData() {
    this->StealthCooldown = EIGS_DialogueCharacterCooldown::Instant;
    this->LimboCooldown = EIGS_DialogueCharacterCooldown::Instant;
    this->ControlCooldown = EIGS_DialogueCharacterCooldown::Instant;
    this->AssaultCooldown = EIGS_DialogueCharacterCooldown::Instant;
}

