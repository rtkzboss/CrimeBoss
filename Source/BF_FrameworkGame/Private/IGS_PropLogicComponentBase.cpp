#include "IGS_PropLogicComponentBase.h"
#include "ComponentInstanceDataCache.h"

UIGS_PropLogicComponentBase::UIGS_PropLogicComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).Mobility = EComponentMobility::Stationary;
}


