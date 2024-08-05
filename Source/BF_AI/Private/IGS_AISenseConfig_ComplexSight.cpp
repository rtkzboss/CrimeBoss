#include "IGS_AISenseConfig_ComplexSight.h"
#include "IGS_AISense_ComplexSight.h"

UIGS_AISenseConfig_ComplexSight::UIGS_AISenseConfig_ComplexSight() {
    (*this).Implementation = UIGS_AISense_ComplexSight::StaticClass();
    (*this).SightRadius = 2.500000000e+03f;
    (*this).LoseSightRadius = 1.650000000e+03f;
    (*this).PeripheralVisionAngleDegrees = 9.000000000e+01f;
    (*this).DetectionByAffiliation.bDetectEnemies = true;
    (*this).AutoSuccessRangeFromLastSeenLocation = -1.000000000e+00f;
    (*this).AutoSuccessSightStrength = 1.000000000e+00f;
    (*this).bUseMainCone = true;
    (*this).bUseSixthSenseCircle = true;
    (*this).VerticalDistanceStart = 3.500000000e+02f;
    (*this).VerticalDistanceEnd = 3.500000000e+02f;
    (*this).MainVisionConeHalfAngleDeg = 4.500000000e+01f;
    (*this).MainVisionConeMaxDistance = 1.200000000e+03f;
    (*this).FrontBoxWidth = 3.500000000e+02f;
    (*this).FrontBoxMaxDistance = 2.000000000e+03f;
    (*this).SixthSenseCircleRadius = 1.500000000e+02f;
    (*this).SixthSenseVisionStrengthLimit = 3.300000131e-01f;
    (*this).DebugColor.B = 0;
    (*this).DebugColor.R = 0;
}


