#include "IGS_BreachPointComponent.h"
#include "ComponentInstanceDataCache.h"
#include "Engine/EngineTypes.h"
#include "Components/PrimitiveComponent.h"
#include "VT/RuntimeVirtualTextureEnum.h"

UIGS_BreachPointComponent::UIGS_BreachPointComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).BreachMontageVariant = EIGS_AIMontageBreachVariant::Breach_Unknown;
}


