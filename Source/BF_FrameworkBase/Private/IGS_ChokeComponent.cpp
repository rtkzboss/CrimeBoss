#include "IGS_ChokeComponent.h"
#include "ComponentInstanceDataCache.h"
#include "Engine/EngineTypes.h"
#include "Components/PrimitiveComponent.h"
#include "VT/RuntimeVirtualTextureEnum.h"
#include "IGS_NavArea_Choke.h"

UIGS_ChokeComponent::UIGS_ChokeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).AreaClass = UIGS_NavArea_Choke::StaticClass();
    (*this).bDynamicObstacle = true;
    auto& gen0 = (*this).ComponentTags;
    gen0.Empty();
    gen0.AddDefaulted(1);
}


