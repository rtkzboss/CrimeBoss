#include "IGS_InteractiveWireBox2.h"

AIGS_InteractiveWireBox2::AIGS_InteractiveWireBox2(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LightsTimeline = NULL;
    this->LightFailMaterial = NULL;
    this->AkAudioComponent = NULL;
    this->CutSuccessAkEvent = NULL;
}

void AIGS_InteractiveWireBox2::SetLightsColors() {
}

void AIGS_InteractiveWireBox2::Client_SetLightFailColors_Implementation(int32 inWireIndex) {
}

void AIGS_InteractiveWireBox2::Client_SetLightColors_Implementation(int32 inWireIndex, int32 inFirstColorIndex, int32 inSecondColorIndex) {
}


