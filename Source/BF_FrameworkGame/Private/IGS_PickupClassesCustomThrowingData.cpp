#include "IGS_PickupClassesCustomThrowingData.h"

FIGS_PickupClassesCustomThrowingData::FIGS_PickupClassesCustomThrowingData() {
    (*this).ThrowForce.X = 3.800000000e+02f;
    (*this).ThrowForce.Y = 0.000000000e+00f;
    (*this).ThrowForce.Z = 3.300000000e+02f;
    (*this).DropForce.X = 0.000000000e+00f;
    (*this).DropForce.Y = 0.000000000e+00f;
    (*this).DropForce.Z = 3.300000000e+02f;
    (*this).SpawnDistance = 2.000000000e+02f;
    (*this).SpawnTransform = FTransform(FQuat(0.000000000e+00,0.000000000e+00,0.000000000e+00,1.000000000e+00), FVector(0.000000000e+00,0.000000000e+00,0.000000000e+00), FVector(1.000000000e+00,1.000000000e+00,1.000000000e+00));
    (*this).DropSpawnDistance = 1.000000000e+02f;
    (*this).bUseCameraPitch = true;
    (*this).SpawnDelay = 0.000000000e+00f;
    (*this).SpawnHeightRelative = 1.000000000e+00f;
}

