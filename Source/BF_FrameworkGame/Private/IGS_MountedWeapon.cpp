#include "IGS_MountedWeapon.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Curves/CurveFloat.h"
#include "Components/TimelineComponent.h"
#include "IGS_AnimatedInteractiveComponentSimple.h"
#include "IGS_SimpleReloader.h"
#include "Net/UnrealNetwork.h"

AIGS_MountedWeapon::AIGS_MountedWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_Initial;
    this->WeaponModsArray.AddDefaulted(8);
    this->CanReloadInADS = false;
    this->UseByAI = true;
    this->NextAIUseTime = 0.00f;
    this->VisitingChar = NULL;
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkAudioComponent"));
    this->IsMGCanShoot = false;
    this->PitchLimit = 45.00f;
    this->PitchDotLimit = 0.71f;
    this->YawLimit = 45.00f;
    this->YawDotLimit = 0.71f;
    this->InteractiveComponent = CreateDefaultSubobject<UIGS_AnimatedInteractiveComponentSimple>(TEXT("Interactive"));
    this->InteractiveBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractiveBoxComponent"));
    this->ReloadTimelineComponent = CreateDefaultSubobject<UTimelineComponent>(TEXT("ReloadTimelineComponent"));
    this->ReloadCurve = CreateDefaultSubobject<UCurveFloat>(TEXT("ReloadCurve"));
    this->Shooter = NULL;
    this->Reloader = CreateDefaultSubobject<UIGS_SimpleReloader>(TEXT("Reloader"));
    this->DefaultMagazineCount = 3;
    this->WeaponItemClass = NULL;
    this->AmmoItemClass = NULL;
    this->WeaponYaw = 0.00f;
    this->WeaponPitch = 0.00f;
    this->lastActiveSlot = EIGS_WieldableSlot::S_Unarmed;
    this->WeaponItemObject = NULL;
    this->AmmoItemObject = NULL;
    this->AkComponent->SetupAttachment(RootComponent);
    this->InteractiveComponent->SetupAttachment(RootComponent);
    this->InteractiveBoxComponent->SetupAttachment(RootComponent);
}


void AIGS_MountedWeapon::StopUsing_SERVER_Implementation(bool inIsOwnerAlive) {
}

void AIGS_MountedWeapon::SetDisallowLeave(bool inIsDisallowed) {
}

void AIGS_MountedWeapon::RotateReloadProgress(float InProgress) {
}

void AIGS_MountedWeapon::OnOwnerDeathNative(float CurrentHealth, float CurrentShield, float HealthChange, float ShieldChange, const FIGS_HitInfo& HitInfo) {
}

void AIGS_MountedWeapon::OnCharacterHolsterFinishedEventNative(bool inIsHolstering) {
}

bool AIGS_MountedWeapon::IsLeaveAllowed() const {
    return false;
}

FVector AIGS_MountedWeapon::GetPawnPosition(AIGS_GameCharacterFramework* charToPosses) {
    return FVector{};
}

void AIGS_MountedWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_MountedWeapon, WeaponYaw);
    DOREPLIFETIME(AIGS_MountedWeapon, WeaponPitch);
}


