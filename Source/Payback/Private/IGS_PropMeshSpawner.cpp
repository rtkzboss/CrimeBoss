#include "IGS_PropMeshSpawner.h"
#include "EIGS_OverlapResponseType.h"
#include "EIGS_BreakPushImpulse.h"
#include "EIGS_WindowBreakBehaviour.h"
#include "ComponentInstanceDataCache.h"
#include "Engine/EngineTypes.h"
#include "Components/PrimitiveComponent.h"
#include "VT/RuntimeVirtualTextureEnum.h"

UIGS_PropMeshSpawner::UIGS_PropMeshSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).bHiddenInGame = true;
}

void UIGS_PropMeshSpawner::Despawn() {
}


