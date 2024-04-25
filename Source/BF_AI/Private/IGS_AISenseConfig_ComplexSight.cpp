#include "IGS_AISenseConfig_ComplexSight.h"
#include "IGS_AISense_ComplexSight.h"

UIGS_AISenseConfig_ComplexSight::UIGS_AISenseConfig_ComplexSight() {
    this->Implementation = UIGS_AISense_ComplexSight::StaticClass();
    this->SightRadius = 2500.00f;
    this->LoseSightRadius = 1650.00f;
    this->PeripheralVisionAngleDegrees = 90.00f;
    this->AutoSuccessRangeFromLastSeenLocation = -1.00f;
    this->PointOfViewBackwardOffset = 0.00f;
    this->NearClippingRadius = 0.00f;
    this->AutoSuccessSightStrength = 1.00f;
    this->bUseVisionShapes = false;
    this->bUseMainCone = true;
    this->bUseFrontBox = false;
    this->bUseSixthSenseCircle = true;
    this->VerticalDistanceStart = 350.00f;
    this->VerticalDistanceEnd = 350.00f;
    this->MainVisionConeHalfAngleDeg = 45.00f;
    this->MainVisionConeMaxDistance = 1200.00f;
    this->FrontBoxWidth = 350.00f;
    this->FrontBoxMaxDistance = 2000.00f;
    this->SixthSenseCircleRadius = 150.00f;
    this->SixthSenseCircleBackwardsOffset = 0.00f;
    this->SixthSenseVisionStrengthLimit = 0.33f;
}


