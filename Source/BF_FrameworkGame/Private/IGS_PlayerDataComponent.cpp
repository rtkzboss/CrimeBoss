#include "IGS_PlayerDataComponent.h"

UIGS_PlayerDataComponent::UIGS_PlayerDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LastEnemyHitTime = -340282346638528859811704183484516925440.00f;
    this->LastShootTime = -340282346638528859811704183484516925440.00f;
    this->LastInjuredTime = -340282346638528859811704183484516925440.00f;
}


