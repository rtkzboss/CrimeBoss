#include "IGS_MaskedChassisComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UIGS_MaskedChassisComponent::UIGS_MaskedChassisComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bBreakableEnabled = true;
    this->RearViewMirrorUVSection = 0;
    this->LeftSideMirrorUVSection = 0;
    this->RightSideMirrorUVSection = 0;
    this->RearViewMirrorAttachedToSection = -1;
    this->RearViewMirrorShaderSlot = 4;
    this->LeftSideMirrorShaderSlot = 5;
    this->RightSideMirrorShaderSlot = 6;
    this->LeftRearViewMirrorDebris = NULL;
    this->LeftRearViewMirrorSocket = TEXT("DoorLeft_RearView");
    this->RightRearViewMirrorDebris = NULL;
    this->RightRearViewMirrorSocket = TEXT("DoorRight_RearView");
    this->RearViewMirrorDebris = NULL;
    this->RearViewMirrorSocket = TEXT("RearViewMirror");
    this->SwingOnPunctureCurve = NULL;
    this->bUseRadialImpactAnims = true;
    this->RadialImpactAnimFront = NULL;
    this->RadialImpactAnimFrontLeft = NULL;
    this->RadialImpactAnimLeft = NULL;
    this->RadialImpactAnimRearLeft = NULL;
    this->RadialImpactAnimRear = NULL;
    this->RadialImpactAnimRearRight = NULL;
    this->RadialImpactAnimRight = NULL;
    this->RadialImpactAnimFrontRight = NULL;
    this->InRadialDamageMin = 100.00f;
    this->InRadialDamageMax = 1000.00f;
    this->OutRadialDamageMultiplierMin = 0.50f;
    this->OutRadialDamageMultiplierMax = 2.00f;
    this->bDisableCarAlarm = false;
    this->CarAlarm = NULL;
    this->OwnerRef = NULL;
    this->mR_bRearViewMirror = false;
    this->mR_bDoorLeftRearView = false;
    this->mR_bDoorRightRearView = false;
    this->RadialHitPosition = EIGS_RadialImpactChassis::Hit_None;
    this->RadialDamageMultiplier = 0.00f;
    this->bCarAlarmTriggered = false;
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


