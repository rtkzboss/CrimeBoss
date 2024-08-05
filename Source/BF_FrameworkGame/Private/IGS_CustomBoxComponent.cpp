#include "IGS_CustomBoxComponent.h"
#include "ComponentInstanceDataCache.h"
#include "Engine/EngineTypes.h"
#include "Components/PrimitiveComponent.h"
#include "VT/RuntimeVirtualTextureEnum.h"
#include "NavAreas/NavArea_Obstacle.h"

UIGS_CustomBoxComponent::UIGS_CustomBoxComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).LineThickness = 2.000000000e+00f;
    (*this).AreaClass = UNavArea_Obstacle::StaticClass();
    (*this).bHiddenInGame = false;
}


