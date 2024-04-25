#include "IGS_DialogueDataRow.h"

FIGS_DialogueDataRow::FIGS_DialogueDataRow() {
    this->GlobalCooldown = 0.00f;
    this->Cooldown = 0.00f;
    this->DelayMin = 0.00f;
    this->DelayMax = 0.00f;
    this->PlayChance = 0.00f;
    this->PlayOncePerMission = false;
    this->PlayOncePerWave = false;
}

