#include "BTDecorator_TagCooldownRandom.h"

UBTDecorator_TagCooldownRandom::UBTDecorator_TagCooldownRandom() {
    (*this).CooldownDurationMin = 5.000000000e-01f;
    (*this).CooldownDurationMax = 2.000000000e+00f;
    (*this).bActivatesCooldown = true;
    (*this).NodeName = TEXT("Tag Cooldown Random");
}


