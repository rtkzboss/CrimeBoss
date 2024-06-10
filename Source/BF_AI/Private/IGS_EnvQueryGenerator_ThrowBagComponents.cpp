#include "IGS_EnvQueryGenerator_ThrowBagComponents.h"
#include "IGS_EnvQueryItemType_ThrowBagComponent.h"

UIGS_EnvQueryGenerator_ThrowBagComponents::UIGS_EnvQueryGenerator_ThrowBagComponents() {
    (*this).MaxDistance = 3.500000000e+03f;
    (*this).MaxDistanceDefend = 2.500000000e+03f;
    (*this).ItemType = UIGS_EnvQueryItemType_ThrowBagComponent::StaticClass();
}


