#include "IGS_DecalContactShadowComponent.h"
#include "Components/DecalComponent.h"
#include "ComponentInstanceDataCache.h"
#include "Materials/Material.h"

UIGS_DecalContactShadowComponent::UIGS_DecalContactShadowComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).LeftLegShadowDecalComponent = CreateDefaultSubobject<UDecalComponent>(TEXT("LeftLegShadow"));
    (*this).RightLegShadowDecalComponent = CreateDefaultSubobject<UDecalComponent>(TEXT("RightLegShadow"));
    (*this).ShadowHardness = 5.500000119e-01f;
    (*this).FemaleSettings.Radius = 1.950000000e+01f;
    (*this).FemaleSettings.WidthScale = 4.345000088e-01f;
    (*this).FemaleSettings.Offset = -4.000000000e+00f;
    (*this).FemaleHeelsSettings.Radius = 1.350000000e+01f;
    (*this).FemaleHeelsSettings.WidthScale = 5.000000000e-01f;
    (*this).FemaleHeelsSettings.Offset = -2.250000000e+00f;
    static ConstructorHelpers::FObjectFinder<UMaterial> gen0(TEXT("/Game/00_Main/MaterialLibrary/Utilities/M_DecalShadow.M_DecalShadow"));
    (*this).ShadowDecalMaterial = gen0.Object;
    (*this).bUseAttachParentBound = true;
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


