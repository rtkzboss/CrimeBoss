#include "IKProperties.h"

FIKProperties::FIKProperties() {
    this->bEnableIK = false;
    this->DistanceSmoothness = 0.00f;
    this->bDoFootRotation = false;
    this->StabilizeGroundNormal = 0.00f;
    this->FootRotationSmoothness = 0.00f;
    this->StabilizationCurveTreshold = 0.00f;
    this->StabilizationSmoothness = 0.00f;
}

