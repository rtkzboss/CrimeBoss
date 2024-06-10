#include "IGS_CoverPointDataHolder.h"

FIGS_CoverPointDataHolder::FIGS_CoverPointDataHolder() {
    (*this).Name = NAME_None;
    (*this).Location.X = 0.000000000e+00f;
    (*this).Location.Y = 0.000000000e+00f;
    (*this).Location.Z = 0.000000000e+00f;
    (*this).DirectionToWall.X = 0.000000000e+00f;
    (*this).DirectionToWall.Y = 0.000000000e+00f;
    (*this).DirectionToWall.Z = 0.000000000e+00f;
    (*this).bLeftCoverStanding = false;
    (*this).bRightCoverStanding = false;
    (*this).bLeftCoverCrouched = false;
    (*this).bRightCoverCrouched = false;
    (*this).bFrontCoverCrouched = false;
    (*this).bUpCoverCrouched = false;
    (*this).bCrouchedCover = false;
}

