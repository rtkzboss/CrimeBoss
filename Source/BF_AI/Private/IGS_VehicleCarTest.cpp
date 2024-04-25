#include "IGS_VehicleCarTest.h"

AIGS_VehicleCarTest::AIGS_VehicleCarTest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxUpSuspension = 5.00f;
    this->MaxDownSuspension = 15.00f;
    this->WheelRadius = 30.00f;
    this->GravityDefault = 500.00f;
    this->WheelTurnSpeed = 3.00f;
    this->WheelTurnSpeedFactor = 0.00f;
    this->bUseGravity = true;
    this->followDistance = 5.00f;
}


