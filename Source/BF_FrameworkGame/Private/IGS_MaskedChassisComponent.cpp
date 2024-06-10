#include "IGS_MaskedChassisComponent.h"
#include "PhysicsEngine/BodyInstance.h"
#include "PhysicsEngine/BodyInstance.h"
#include "ComponentInstanceDataCache.h"
#include "Engine/EngineTypes.h"
#include "Components/PrimitiveComponent.h"
#include "VT/RuntimeVirtualTextureEnum.h"
#include "Chaos/ChaosEngineInterface.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UIGS_MaskedChassisComponent::UIGS_MaskedChassisComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).bBreakableEnabled = true;
    (*this).RearViewMirrorAttachedToSection = -1;
    (*this).RearViewMirrorShaderSlot = 4;
    (*this).LeftSideMirrorShaderSlot = 5;
    (*this).RightSideMirrorShaderSlot = 6;
    (*this).LeftRearViewMirrorSocket = TEXT("DoorLeft_RearView");
    (*this).RightRearViewMirrorSocket = TEXT("DoorRight_RearView");
    (*this).RearViewMirrorSocket = TEXT("RearViewMirror");
    (*this).bUseRadialImpactAnims = true;
    (*this).InRadialDamageMin = 1.000000000e+02f;
    (*this).InRadialDamageMax = 1.000000000e+03f;
    (*this).OutRadialDamageMultiplierMin = 5.000000000e-01f;
    (*this).OutRadialDamageMultiplierMax = 2.000000000e+00f;
    (*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("ObjectType")->ContainerPtrToValuePtr<TEnumAsByte<ECollisionChannel>>(&(*this).BodyInstance, 0)) = ECC_Vehicle;
    (*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionProfileName")->ContainerPtrToValuePtr<FName>(&(*this).BodyInstance, 0)) = TEXT("Vehicle");
    (*TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels")->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses")->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).WorldStatic = ECR_Ignore;
    (*TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels")->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses")->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).WorldDynamic = ECR_Ignore;
    (*TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels")->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses")->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).Vehicle = ECR_Ignore;
    (*TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels")->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses")->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).Destructible = ECR_Ignore;
    (*TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels")->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses")->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel10 = ECR_Ignore;
    (*TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels")->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses")->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel12 = ECR_Ignore;
    (*TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels")->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses")->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel14 = ECR_Ignore;
    (*TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels")->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses")->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel16 = ECR_Ignore;
    auto& gen590 = (*TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseArray")->ContainerPtrToValuePtr<TArray<FResponseChannel>>(&(*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses")->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0));
    gen590.Empty();
    gen590.AddDefaulted(9);
    (*this).PrimaryComponentTick.bCanEverTick = true;
    (*this).PrimaryComponentTick.bStartWithTickEnabled = false;
}

void UIGS_MaskedChassisComponent::TriggerCarAlarm() {
}

void UIGS_MaskedChassisComponent::SetBreakable(bool Enabled) {
}

void UIGS_MaskedChassisComponent::OnWindowInstanceBroken(int32 InstanceIndex) {
}

void UIGS_MaskedChassisComponent::OnTirePuncturedUpdate(FVector CurveValue) {
}

void UIGS_MaskedChassisComponent::OnTirePuncturedFinish() {
}

void UIGS_MaskedChassisComponent::OnTirePunctured() {
}

void UIGS_MaskedChassisComponent::OnRep_ChassisState() {
}

void UIGS_MaskedChassisComponent::OnRadialImpactUpdate(FVector CurveValue) {
}

void UIGS_MaskedChassisComponent::OnRadialImpactFinish() {
}

bool UIGS_MaskedChassisComponent::IsBreakable() {
    return false;
}

void UIGS_MaskedChassisComponent::ChassisTakeRadialDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, FVector Origin, FHitResult HitInfo, AController* InstigatedBy, AActor* DamageCauser) {
}

void UIGS_MaskedChassisComponent::ChassisTakeDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser) {
}

void UIGS_MaskedChassisComponent::BreakSection(int32 InVIndex, int32 InDesiredVIndex, int32 InDesiredShaderSlot, FName InDesiredSocketName, TSubclassOf<AActor> InDesiredDebris, bool& OutSectionState) {
}

void UIGS_MaskedChassisComponent::All_HandleMaskedSection_Implementation(FVector_NetQuantize ImpactPoint, FVector_NetQuantizeNormal ShotFrom) {
}

void UIGS_MaskedChassisComponent::All_BreakSection_Implementation(int32 InVIndex, int32 InDesiredVIndex, int32 InDesiredShaderSlot, FName InDesiredSocketName, TSubclassOf<AActor> InDesiredDebris, bool OutSectionState) {
}

void UIGS_MaskedChassisComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_MaskedChassisComponent, mR_bRearViewMirror);
    DOREPLIFETIME(UIGS_MaskedChassisComponent, mR_bDoorLeftRearView);
    DOREPLIFETIME(UIGS_MaskedChassisComponent, mR_bDoorRightRearView);
}


