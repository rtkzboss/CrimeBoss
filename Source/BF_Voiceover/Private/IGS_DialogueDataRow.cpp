#include "IGS_DialogueDataRow.h"

FIGS_DialogueDataRow::FIGS_DialogueDataRow() {
    (*this).ID = NAME_None;
    (*this).GlobalCooldown = 0.000000000e+00f;
    (*this).Cooldown = 0.000000000e+00f;
    (*this).DelayMin = 0.000000000e+00f;
    (*this).DelayMax = 0.000000000e+00f;
    (*this).PlayChance = 0.000000000e+00f;
    (*this).PlayOncePerMission = false;
    (*this).PlayOncePerWave = false;
    auto& gen3397 = (*this).Transcript;
    gen3397.Empty();
}

