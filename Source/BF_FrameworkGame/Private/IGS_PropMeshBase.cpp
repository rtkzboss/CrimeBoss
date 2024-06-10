#include "IGS_PropMeshBase.h"
#include "EIGS_OverlapResponseType.h"
#include "ComponentInstanceDataCache.h"
#include "Engine/EngineTypes.h"
#include "Components/PrimitiveComponent.h"
#include "VT/RuntimeVirtualTextureEnum.h"
#include "EIGS_BreakPushImpulse.h"
#include "EIGS_WindowBreakBehaviour.h"
#include "Net/UnrealNetwork.h"

UIGS_PropMeshBase::UIGS_PropMeshBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).mR_SpawnedIndex = -1;
    (*this).Mobility = EComponentMobility::Stationary;
}

void UIGS_PropMeshBase::OnRep_Spawned() {
}

void UIGS_PropMeshBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_PropMeshBase, mR_SpawnedIndex);
}


