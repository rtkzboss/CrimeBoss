#include "BTDecorator_TagCooldownRandom.h"

UBTDecorator_TagCooldownRandom::UBTDecorator_TagCooldownRandom() {
    this->NodeName = TEXT("Tag Cooldown Random");
    this->CooldownDurationMin = 0.50f;
    this->CooldownDurationMax = 2.00f;
    this->bAddToExistingDuration = false;
    this->bActivatesCooldown = true;
}


