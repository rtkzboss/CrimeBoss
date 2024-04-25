#include "IGS_NavLinkComponent.h"

UIGS_NavLinkComponent::UIGS_NavLinkComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CommonAnimation = EIGS_SmartLinkAnimVariant::AIM_None;
    this->LeftAnimation = EIGS_SmartLinkAnimVariant::AIM_None;
    this->LeftAnimationAsset = NULL;
    this->RightAnimation = EIGS_SmartLinkAnimVariant::AIM_None;
    this->RightAnimationAsset = NULL;
}


