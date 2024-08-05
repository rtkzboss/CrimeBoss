#include "IGS_PathPointsInterp.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AIGS_PathPointsInterp::AIGS_PathPointsInterp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).NumberOfSteps = 3.000000000e+02f;
    (*this).RotationSmoothness = 2.000000000e+00f;
    (*this).LocationSmoothness = 1.000000000e+00f;
    (*this).Debug = true;
    (*this).PrimaryActorTick.bCanEverTick = true;
}


