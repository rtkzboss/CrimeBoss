#include "IGS_PatrolEQSFilterBox.h"
#include "EIGS_BoxSphereShape.h"
#include "PhysicsEngine/BodyInstance.h"
#include "PhysicsEngine/BodyInstance.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Chaos/ChaosEngineInterface.h"

AIGS_PatrolEQSFilterBox::AIGS_PatrolEQSFilterBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionEnabled")->ContainerPtrToValuePtr<TEnumAsByte<ECollisionEnabled::Type>>(&(*this).BodyInstance, 0)) = ECollisionEnabled::NoCollision;
    (*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionProfileName")->ContainerPtrToValuePtr<FName>(&(*this).BodyInstance, 0)) = TEXT("NoCollision");
    (*TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels")->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses")->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).WorldStatic = ECR_Ignore;
    (*TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels")->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses")->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).WorldDynamic = ECR_Ignore;
    (*TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels")->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses")->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).Pawn = ECR_Ignore;
    (*TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels")->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses")->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).Visibility = ECR_Ignore;
    (*TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels")->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses")->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).Camera = ECR_Ignore;
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
    (*TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels")->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses")->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel8 = ECR_Ignore;
    (*TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels")->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses")->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel9 = ECR_Ignore;
    (*TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels")->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses")->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel10 = ECR_Ignore;
    (*TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels")->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses")->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel11 = ECR_Ignore;
    (*TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels")->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses")->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel12 = ECR_Ignore;
    (*TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels")->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses")->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel13 = ECR_Ignore;
    (*TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels")->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses")->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel14 = ECR_Ignore;
    (*TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels")->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses")->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel16 = ECR_Ignore;
    (*TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels")->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses")->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel17 = ECR_Ignore;
    auto& gen562 = (*TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseArray")->ContainerPtrToValuePtr<TArray<FResponseChannel>>(&(*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses")->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0));
    gen562.Empty();
    gen562.AddDefaulted(22);
    (*this).Color.B = 0;
    (*this).Color.R = 255;
    (*this).bGenerateOverlapEvents = false;
    (*this).bDisableShapeSelection = true;
}

void AIGS_PatrolEQSFilterBox::UpdateDebugSubsystemSettings() {
}


