#include "IGS_MultiBreakableComponent.h"
#include "EIGS_OverlapResponseType.h"
#include "ComponentInstanceDataCache.h"
#include "Engine/EngineTypes.h"
#include "Components/PrimitiveComponent.h"
#include "VT/RuntimeVirtualTextureEnum.h"
#include "EIGS_BreakPushImpulse.h"
#include "EIGS_WindowBreakBehaviour.h"

UIGS_MultiBreakableComponent::UIGS_MultiBreakableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}


