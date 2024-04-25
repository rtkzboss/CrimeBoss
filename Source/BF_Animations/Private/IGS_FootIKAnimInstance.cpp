#include "IGS_FootIKAnimInstance.h"

UIGS_FootIKAnimInstance::UIGS_FootIKAnimInstance() {
    this->IsInjured = false;
    this->UsePoseEffectorTarget = true;
    this->LODThreshold = 2;
    this->IterpolationToZeroSpeed = 5.00f;
    this->FootReachDistance = 300.00f;
    this->MaxRootBoneOffset = 1.00f;
    this->MaxRootBoneOffsetWhileCrouching = 0.10f;
    this->MaxRootBoneDistance = 100.00f;
    this->MaxChestBoneDistance = 100.00f;
    this->MaxFootBonesDistance = 35.00f;
    this->MaxChestBoneOffset = 1.00f;
    this->RootBoneSmoothnessFinterp = 50.00f;
    this->GroundNormalAngleThreshold = 70.00f;
    this->EnableStabilization = true;
    this->StabilizationTreshold = 10.00f;
    this->RootOffset = 0.00f;
    this->ChestOffset = 0.00f;
}

void UIGS_FootIKAnimInstance::SetPoleVectorOffsets(const FName& R_PoleVector_Offset_X, const FName& R_PoleVector_Offset_Y, const FName& R_PoleVector_Offset_Z, const FName& L_PoleVector_Offset_X, const FName& L_PoleVector_Offset_Y, const FName& L_PoleVector_Offset_Z) {
}

void UIGS_FootIKAnimInstance::SetEnableFootPlacement(bool Enable) {
}

bool UIGS_FootIKAnimInstance::GetEnablePlacement() {
    return false;
}


