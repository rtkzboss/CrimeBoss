#include "IGS_RideableVehicle_Base.h"
#include "AkComponent.h"
#include "IGS_ObjectStatus.h"
#include "IGS_InteractiveComponent.h"
#include "Components/BoxComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Components/SkeletalMeshComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_RideableVehicle_Base::AIGS_RideableVehicle_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).MaxKilometersPerHour = 3.000000000e+01f;
    (*this).RotationNormalizationFactor = 1.225000000e+01f;
    (*this).CanInteract = true;
    (*this).LocationSyncLerpForce = 1.000000015e-01f;
    (*this).RotationSyncLerpForce = 1.000000015e-01f;
    (*this).ObjectStatus = CreateDefaultSubobject<UIGS_ObjectStatus>(TEXT("Object Status"));
    (*this).EngineOffOnHealthPercent = 3.000000119e-01f;
    (*this).AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    (*this).InteractiveComponent = CreateDefaultSubobject<UIGS_InteractiveComponent>(TEXT("Interactive"));
    (*this).FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    (*this).EntryTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("Entry Trigger"));
    (*this).BaseMass = 1.000000000e+03f;
    (*this).BagWeight = 5.000000000e+01f;
    (*this).BagInteractionDistance = 4.000000000e+02f;
    (*this).Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    (*this).bAlwaysRelevant = true;
    (*this).RootComponent = (USceneComponent*)Mesh;
    (*this).InteractiveComponent->SetupAttachment((*this).RootComponent);
    (*this).FirstPersonCameraComponent->SetupAttachment((*this).RootComponent);
    (*this).EntryTrigger->SetupAttachment((*this).RootComponent);
    (*this).AkComponent->SetupAttachment((*this).RootComponent);
}

void AIGS_RideableVehicle_Base::VehicleDestroy(float inCurrentHealth, float inCurrentShield, float inHealthChange, float inShieldChange, const FIGS_HitInfo& inHitInfo) {
}





void AIGS_RideableVehicle_Base::OnUpdateThrottleTiming() {
}

void AIGS_RideableVehicle_Base::OnStopUsing_SERVER_Implementation(int32 inSeatIndex) {
}

void AIGS_RideableVehicle_Base::OnStopUsing_MULTICAST_Implementation(AIGS_GameCharacterFramework* inCharacter, int32 inSeatIndex) {
}

void AIGS_RideableVehicle_Base::OnStartUsing_SERVER_Implementation(AIGS_GameCharacterFramework* inCharacter, int32 inSeatIndex) {
}

void AIGS_RideableVehicle_Base::OnStartUsing_MULTICAST_Implementation(AIGS_GameCharacterFramework* inCharacter, int32 inSeatIndex) {
}

void AIGS_RideableVehicle_Base::OnRepRotation() {
}

void AIGS_RideableVehicle_Base::OnRepLocation() {
}

void AIGS_RideableVehicle_Base::OnRepLinearDrag() {
}

void AIGS_RideableVehicle_Base::OnRepAngularDrag() {
}

void AIGS_RideableVehicle_Base::OnRep_RuntimeBagInfo() {
}

void AIGS_RideableVehicle_Base::OnRep_PlayerSlots() {
}

void AIGS_RideableVehicle_Base::OnRep_EngineDestroed() {
}

void AIGS_RideableVehicle_Base::OnDetachBag_SERVER_Implementation(int32 inBagIndex) {
}

void AIGS_RideableVehicle_Base::OnDetachBag_MULTICAST_Implementation(AIGS_LootBagPickup* inBag, int32 inBagIndex) {
}

void AIGS_RideableVehicle_Base::OnAttachBag_SERVER_Implementation(AIGS_LootBagPickup* inBag, int32 inBagIndex) {
}

void AIGS_RideableVehicle_Base::OnAttachBag_MULTICAST_Implementation(AIGS_LootBagPickup* inBag, int32 inBagIndex) {
}

bool AIGS_RideableVehicle_Base::OfferPositionToDismount_Implementation(AIGS_GameCharacterFramework* inCharacter, int32 inSeatIndex, FTransform& OutPosition) const {
    return false;
}

void AIGS_RideableVehicle_Base::LootBagDestroyed_SERVER_Implementation(int32 inIndex) {
}

void AIGS_RideableVehicle_Base::LootBagDestroyed_Implementation(AIGS_LootBagPickup* inBagPickup) {
}

void AIGS_RideableVehicle_Base::InteractClient(AIGS_GameCharacterFramework* inInstigator) {
}

void AIGS_RideableVehicle_Base::Interact(AIGS_GameCharacterFramework* inInstigator) {
}

void AIGS_RideableVehicle_Base::Horn_SERVER_Implementation(bool inStartPlaying) {
}

void AIGS_RideableVehicle_Base::Horn_MULTICAST_Implementation(bool inStartPlaying) {
}

float AIGS_RideableVehicle_Base::GetMaxVelocity() const {
    return 0.0f;
}

float AIGS_RideableVehicle_Base::GetKmPerHAspect() {
    return 0.0f;
}


void AIGS_RideableVehicle_Base::EngineDestroy_Implementation() {
}

bool AIGS_RideableVehicle_Base::CheckIsEngineOn() {
    return false;
}


bool AIGS_RideableVehicle_Base::CanPickBag_Implementation(AIGS_LootBagPickup* inBag, int32 inTargetSlot) {
    return false;
}

void AIGS_RideableVehicle_Base::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_RideableVehicle_Base, PlayerSlots);
    DOREPLIFETIME(AIGS_RideableVehicle_Base, RuntimeBagInfo);
    DOREPLIFETIME(AIGS_RideableVehicle_Base, CanInteract);
    DOREPLIFETIME(AIGS_RideableVehicle_Base, bIsEngineDestroyed);
    DOREPLIFETIME(AIGS_RideableVehicle_Base, mR_location);
    DOREPLIFETIME(AIGS_RideableVehicle_Base, mR_rotation);
    DOREPLIFETIME(AIGS_RideableVehicle_Base, mR_linearDrag);
    DOREPLIFETIME(AIGS_RideableVehicle_Base, mR_angularDrag);
}


