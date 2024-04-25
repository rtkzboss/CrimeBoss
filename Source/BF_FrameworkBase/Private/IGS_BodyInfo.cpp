#include "IGS_BodyInfo.h"

FIGS_BodyInfo::FIGS_BodyInfo() {
    this->bIsFemale = false;
    this->bHasHeels = false;
    this->bIsMetahuman = false;
    this->bIsMutable = false;
    this->bIsRobot = false;
    this->Fatness = 0.00f;
    this->Ethnicity = EIGS_Ethnicity::White;
}

