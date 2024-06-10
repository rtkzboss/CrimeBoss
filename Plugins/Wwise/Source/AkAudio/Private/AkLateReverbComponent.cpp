#include "AkLateReverbComponent.h"
#include "ComponentInstanceDataCache.h"

UAkLateReverbComponent::UAkLateReverbComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).bEnable = true;
    (*this).SendLevel = 1.000000000e+00f;
    (*this).FadeRate = 5.000000000e-01f;
    (*this).Priority = 1.000000000e+00f;
    (*this).AutoAssignAuxBus = true;
    (*this).bUseAttachParentBound = true;
}

void UAkLateReverbComponent::AssociateAkTextureSetComponent(UAkAcousticTextureSetComponent* textureSetComponent) {
}


