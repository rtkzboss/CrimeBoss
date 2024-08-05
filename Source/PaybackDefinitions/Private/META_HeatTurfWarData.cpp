#include "META_HeatTurfWarData.h"

FMETA_HeatTurfWarData::FMETA_HeatTurfWarData() {
    (*this).CapturingNeutralTurf = 0;
    (*this).FailedTurfAttackOrDefend = 3;
    (*this).CapturingFirstTurfInTheSameDay = 5;
    (*this).CapturingSecondTurfInTheSameDay = 10;
    (*this).CapturingThirdTurfInTheSameDay = 20;
    (*this).CapturinFourthTurfInTheSameDay = 30;
    (*this).CapturingFifthAndMoreTurfInTheSameDay = 40;
}

