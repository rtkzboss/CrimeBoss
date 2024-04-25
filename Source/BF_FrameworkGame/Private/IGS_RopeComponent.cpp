#include "IGS_RopeComponent.h"
#include "Net/UnrealNetwork.h"

UIGS_RopeComponent::UIGS_RopeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bHiddenInGame = true;
    this->PlayerAttachmentSocketName = TEXT("pelvis_rope_socket");
    this->SpeedOfSimulation = 10.00f;
    this->UpdatedHandsPointsStartTime = 0.50f;
    this->ActorInterpolationSpeed = 10.00f;
    this->EndInterpSpeed = 400.00f;
    this->UseRopeLengthOffset = false;
    this->RopeLengthOffset = 100.00f;
    this->IsRollingOffRopeAllowed = false;
    this->RollOffDelay = 2.00f;
    this->EnableVisibilityDelay = 1.00f;
    this->PlayerStopUsingVelocityLimit = 0.95f;
    this->bAttachStart = true;
    this->CableLength = 0.00f;
    this->NumSegments = 60;
    this->SubstepTime = 0.02f;
    this->SolverIterations = 4;
    this->bEnableStiffness = true;
    this->bUseSubstepping = true;
    this->bSkipCableUpdateWhenNotVisible = false;
    this->bSkipCableUpdateWhenNotOwnerRecentlyRendered = false;
    this->CollisionFriction = 0.20f;
    this->CableGravityScale = 1.00f;
    this->CableWidth = 3.50f;
    this->NumSides = 8;
    this->TileMaterial = 1.00f;
    this->RopeType = EIGS_RopeType::RT_Navlink;
    this->m_AttachedActor = NULL;
    this->mR_AllowMoveEndPoint = false;
    this->mR_Limitvelocity = false;
    this->mR_LockEndParticle = true;
    this->mR_RollOffRope = false;
}

void UIGS_RopeComponent::SetAttachEndToComponent(USceneComponent* Component, FName SocketName) {
}

void UIGS_RopeComponent::SetAttachEndTo(AActor* Actor, FName ComponentProperty, FName SocketName) {
}

void UIGS_RopeComponent::GetCableParticleLocations(TArray<FVector>& Locations) const {
}

USceneComponent* UIGS_RopeComponent::GetAttachedComponent() const {
    return NULL;
}

AActor* UIGS_RopeComponent::GetAttachedActor() const {
    return NULL;
}

void UIGS_RopeComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_RopeComponent, RopeType);
    DOREPLIFETIME(UIGS_RopeComponent, mR_StartPosition);
    DOREPLIFETIME(UIGS_RopeComponent, mR_EndPosition);
    DOREPLIFETIME(UIGS_RopeComponent, mR_AllowMoveEndPoint);
    DOREPLIFETIME(UIGS_RopeComponent, mR_Limitvelocity);
    DOREPLIFETIME(UIGS_RopeComponent, mR_LockEndParticle);
    DOREPLIFETIME(UIGS_RopeComponent, mR_RollOffRope);
}


