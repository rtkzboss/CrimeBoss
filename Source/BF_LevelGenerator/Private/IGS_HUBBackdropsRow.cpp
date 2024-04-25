#include "IGS_HUBBackdropsRow.h"

FIGS_HUBBackdropsRow::FIGS_HUBBackdropsRow() {
    this->bIsActive = false;
    this->RotationType = EIGS_HubRotation::RotateAll;
    this->BackdropType = EIGS_HubBackdropTypes::AllRandom;
    this->DistrictType = EIGS_HubDistrict::Downtown;
}

