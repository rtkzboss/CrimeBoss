#include "IGS_BTTask_HandleDirectionalPlayerCue.h"

UIGS_BTTask_HandleDirectionalPlayerCue::UIGS_BTTask_HandleDirectionalPlayerCue() {
    this->NodeName = TEXT("Handle Directional Player Cue");
    this->Type = EIGS_DirectionalCueType::DC_Generic;
    this->Cooldown = 10.00f;
}


