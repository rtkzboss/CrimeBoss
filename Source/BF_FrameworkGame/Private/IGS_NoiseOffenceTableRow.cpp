#include "IGS_NoiseOffenceTableRow.h"
#include "EIGS_ReactionTypeTags.h"
#include "EIGS_AmbientReaction.h"
#include "EIGS_OffenceType.h"

FIGS_NoiseOffenceTableRow::FIGS_NoiseOffenceTableRow() {
    (*this).NoiseEventTag = NAME_None;
    (*this).bAddsDetection = false;
    (*this).DetectionAddedMult = 1.000000000e+00f;
    (*this).OffenceType = EIGS_OffenceType::Offence_Noise;
    (*this).OffenceNoticedBy = 3;
}

