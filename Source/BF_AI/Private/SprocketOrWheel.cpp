#include "SprocketOrWheel.h"

FSprocketOrWheel::FSprocketOrWheel() {
    (*this).BoneName = NAME_None;
    (*this).SpinAxis = EAxis::Y;
    (*this).SpeedMultiplier = 1.000000000e+00f;
    (*this).BoneSpace = EBoneSpaces::ComponentSpace;
}

