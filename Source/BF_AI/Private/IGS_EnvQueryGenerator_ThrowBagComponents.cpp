#include "IGS_EnvQueryGenerator_ThrowBagComponents.h"
#include "IGS_EnvQueryItemType_ThrowBagComponent.h"

UIGS_EnvQueryGenerator_ThrowBagComponents::UIGS_EnvQueryGenerator_ThrowBagComponents() {
    this->ItemType = UIGS_EnvQueryItemType_ThrowBagComponent::StaticClass();
    this->MaxDistance = 3500.00f;
    this->MaxDistanceDefend = 2500.00f;
}


