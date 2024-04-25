#include "CoverPoint.h"

UCoverPoint::UCoverPoint() {
    this->OccupiedBy = NULL;
    this->CooldownEndTime = 0.00f;
    this->bLeftCoverStanding = false;
    this->bRightCoverStanding = false;
    this->bLeftCoverCrouched = false;
    this->bRightCoverCrouched = false;
    this->bFrontCoverCrouched = false;
    this->bUpCoverCrouched = false;
    this->bCrouchedCover = false;
    this->IsActive = true;
    this->IsLocked = false;
    this->CoverReached = false;
    this->bIsManual = false;
    this->IsValid = true;
}


