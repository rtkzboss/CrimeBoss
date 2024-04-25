#include "IGS_DecalContactShadowComponent.h"
#include "Components/DecalComponent.h"

UIGS_DecalContactShadowComponent::UIGS_DecalContactShadowComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LeftLegShadowDecalComponent = CreateDefaultSubobject<UDecalComponent>(TEXT("LeftLegShadow"));
    this->RightLegShadowDecalComponent = CreateDefaultSubobject<UDecalComponent>(TEXT("RightLegShadow"));
    this->ShadowHardness = 0.55f;
    this->bUseCustomSettings = false;
    this->LeftLegDecalMaterial = NULL;
    this->RightLegDecalMaterial = NULL;
}

void UIGS_DecalContactShadowComponent::UpdateShadowRotation() {
}

void UIGS_DecalContactShadowComponent::SetShadowVisible(bool inVisible) {
}

void UIGS_DecalContactShadowComponent::InitShadowParameters(float InRadius, float inWidthScale) {
}

void UIGS_DecalContactShadowComponent::InitDefaultDecalSettings() {
}

void UIGS_DecalContactShadowComponent::InitComponent() {
}

void UIGS_DecalContactShadowComponent::InitAttachment(float inOffset) {
}

void UIGS_DecalContactShadowComponent::ChangeCameraFadeMaterialParameter(bool Enabled) {
}


