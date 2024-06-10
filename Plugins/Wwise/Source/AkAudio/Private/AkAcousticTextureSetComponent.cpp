#include "AkAcousticTextureSetComponent.h"
#include "ComponentInstanceDataCache.h"

UAkAcousticTextureSetComponent::UAkAcousticTextureSetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PrimaryComponentTick.bCanEverTick = true;
}


