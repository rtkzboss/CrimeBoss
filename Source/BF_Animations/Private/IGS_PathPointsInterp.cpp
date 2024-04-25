#include "IGS_PathPointsInterp.h"

AIGS_PathPointsInterp::AIGS_PathPointsInterp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurveInterpolationMode = FlyingCurveInterpolationMode::Mode_Bezier;
    this->NumberOfSteps = 300.00f;
    this->RotationSmoothness = 2.00f;
    this->LocationSmoothness = 1.00f;
    this->ActorToMove = NULL;
    this->ShouldMove = false;
    this->bExecuteOnce = false;
    this->Debug = true;
}


