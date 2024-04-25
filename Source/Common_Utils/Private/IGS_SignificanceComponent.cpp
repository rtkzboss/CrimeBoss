#include "IGS_SignificanceComponent.h"

UIGS_SignificanceComponent::UIGS_SignificanceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentSignificanceValue = EIGS_SignificanceValue::None;
    this->bIsEnabled = true;
    this->bEventOnlyOnChanged = true;
}


