#include "IGS_FootIKAnimInstance.h"

UIGS_FootIKAnimInstance::UIGS_FootIKAnimInstance() {
    (*this).UsePoseEffectorTarget = true;
    (*this).LODThreshold = 2;
    (*this).IterpolationToZeroSpeed = 5.000000000e+00f;
    (*this).FootReachDistance = 3.000000000e+02f;
    (*this).MaxRootBoneOffset = 1.000000000e+00f;
    (*this).MaxRootBoneOffsetWhileCrouching = 1.000000015e-01f;
    (*this).MaxRootBoneDistance = 1.000000000e+02f;
    (*this).MaxChestBoneDistance = 1.000000000e+02f;
    (*this).MaxFootBonesDistance = 3.500000000e+01f;
    (*this).MaxChestBoneOffset = 1.000000000e+00f;
    (*this).RootBoneSmoothnessFinterp = 5.000000000e+01f;
    (*this).GroundNormalAngleThreshold = 7.000000000e+01f;
    (*this).EnableStabilization = true;
    (*this).StabilizationTreshold = 1.000000000e+01f;
}

void UIGS_FootIKAnimInstance::SetPoleVectorOffsets(const FName& R_PoleVector_Offset_X, const FName& R_PoleVector_Offset_Y, const FName& R_PoleVector_Offset_Z, const FName& L_PoleVector_Offset_X, const FName& L_PoleVector_Offset_Y, const FName& L_PoleVector_Offset_Z) {
}

void UIGS_FootIKAnimInstance::SetEnableFootPlacement(bool Enable) {
}

bool UIGS_FootIKAnimInstance::GetEnablePlacement() {
    return false;
}


