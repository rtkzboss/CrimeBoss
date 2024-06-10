#include "AkRoomComponent.h"
#include "ComponentInstanceDataCache.h"

UAkRoomComponent::UAkRoomComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).bEnable = true;
    (*this).WallOcclusion = 1.000000000e+00f;
    (*this).bUseAttachParentBound = true;
    (*this).PrimaryComponentTick.bCanEverTick = true;
}

void UAkRoomComponent::SetGeometryComponent(UAkAcousticTextureSetComponent* textureSetComponent) {
}

UPrimitiveComponent* UAkRoomComponent::GetPrimitiveParent() const {
    return NULL;
}


