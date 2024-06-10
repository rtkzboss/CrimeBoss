#include "IGS_RopeComponent.h"
#include "PhysicsEngine/BodyInstance.h"
#include "PhysicsEngine/BodyInstance.h"
#include "ComponentInstanceDataCache.h"
#include "Engine/EngineTypes.h"
#include "Components/PrimitiveComponent.h"
#include "VT/RuntimeVirtualTextureEnum.h"
#include "Chaos/ChaosEngineInterface.h"
#include "Net/UnrealNetwork.h"

UIGS_RopeComponent::UIGS_RopeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PlayerAttachmentSocketName = TEXT("pelvis_rope_socket");
    (*this).SpeedOfSimulation = 1.000000000e+01f;
    (*this).UpdatedHandsPointsStartTime = 5.000000000e-01f;
    (*this).ActorInterpolationSpeed = 1.000000000e+01f;
    (*this).EndInterpSpeed = 4.000000000e+02f;
    (*this).RopeActorOffset.X = 4.000000000e+01f;
    (*this).RopeLengthOffset = 1.000000000e+02f;
    (*this).RollOffDelay = 2.000000000e+00f;
    (*this).EnableVisibilityDelay = 1.000000000e+00f;
    (*this).RollOffSpeed.Min = 8.000000000e+02f;
    (*this).RollOffSpeed.Max = 1.000000000e+03f;
    (*this).PlayerStopUsingVelocityLimit = 9.499999881e-01f;
    (*this).bAttachStart = true;
    (*this).NumSegments = 60;
    (*this).SubstepTime = 1.999999955e-02f;
    (*this).SolverIterations = 4;
    (*this).bEnableStiffness = true;
    (*this).bUseSubstepping = true;
    (*this).CollisionFriction = 2.000000030e-01f;
    (*this).CableGravityScale = 1.000000000e+00f;
    (*this).CableWidth = 3.500000000e+00f;
    (*this).NumSides = 8;
    (*this).TileMaterial = 1.000000000e+00f;
    (*this).RopeType = EIGS_RopeType::RT_Navlink;
    (*this).mR_LockEndParticle = true;
    (*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("ObjectType")->ContainerPtrToValuePtr<TEnumAsByte<ECollisionChannel>>(&(*this).BodyInstance, 0)) = ECC_PhysicsBody;
    (*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionProfileName")->ContainerPtrToValuePtr<FName>(&(*this).BodyInstance, 0)) = TEXT("Rope");
    (*TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels")->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses")->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).WorldDynamic = ECR_Ignore;
    (*TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels")->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses")->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).Pawn = ECR_Ignore;
    (*TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels")->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses")->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).PhysicsBody = ECR_Ignore;
    (*TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels")->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses")->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).Vehicle = ECR_Ignore;
    (*TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels")->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses")->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).Destructible = ECR_Ignore;
    (*TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels")->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses")->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel1 = ECR_Ignore;
    (*TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels")->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses")->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel2 = ECR_Ignore;
    (*TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels")->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses")->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel3 = ECR_Ignore;
    (*TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels")->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses")->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel4 = ECR_Ignore;
    (*TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels")->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses")->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel5 = ECR_Ignore;
    (*TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels")->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses")->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel6 = ECR_Ignore;
    (*TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels")->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses")->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel7 = ECR_Ignore;
    (*TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels")->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses")->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel9 = ECR_Ignore;
    (*TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels")->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses")->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel10 = ECR_Ignore;
    (*TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels")->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses")->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel11 = ECR_Ignore;
    (*TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels")->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses")->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel12 = ECR_Ignore;
    (*TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels")->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses")->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel13 = ECR_Ignore;
    (*TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels")->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses")->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel14 = ECR_Ignore;
    (*TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels")->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses")->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel15 = ECR_Ignore;
    auto& gen618 = (*TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseArray")->ContainerPtrToValuePtr<TArray<FResponseChannel>>(&(*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses")->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0));
    gen618.Empty();
    gen618.AddDefaulted(16);
    (*this).bHiddenInGame = true;
    (*this).PrimaryComponentTick.bCanEverTick = true;
    (*this).bAutoActivate = true;
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


