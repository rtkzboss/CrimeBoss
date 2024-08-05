#include "IGS_HeadAnimInstance.h"

UIGS_HeadAnimInstance::UIGS_HeadAnimInstance() {
    (*this).DeathPoseLookOffset.Y = 4.500000000e+01f;
    (*this).AdditiveCurves = true;
}


bool UIGS_HeadAnimInstance::IsPlayer() const {
    return false;
}

bool UIGS_HeadAnimInstance::IsBot() const {
    return false;
}

UIGS_PlayerAnimInstance* UIGS_HeadAnimInstance::GetOwningPlayerAnimInstance() {
    return NULL;
}

int32 UIGS_HeadAnimInstance::GetLOD_Index() const {
    return 0;
}

void UIGS_HeadAnimInstance::FindEyesLookAt(const FVector& inFromLocation, FVector2D& OutEyesOffset) const {
}


