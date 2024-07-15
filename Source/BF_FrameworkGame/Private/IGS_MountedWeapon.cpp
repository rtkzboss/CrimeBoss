#include "IGS_MountedWeapon.h"
#include "AkComponent.h"
#include "EIGS_WeaponAttackType.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Curves/CurveFloat.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/TimelineComponent.h"
#include "IGS_AnimatedInteractiveComponentSimple.h"
#include "IGS_SimpleReloader.h"
#include "Net/UnrealNetwork.h"

AIGS_MountedWeapon::AIGS_MountedWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).UseByAI = true;
    (*this).AIShotsToFire.Min = 30;
    (*this).AIShotsToFire.Max = 40;
    (*this).AIDelayBetweenShots.Min = 3.000000000e+00f;
    (*this).AIDelayBetweenShots.Max = 5.000000000e+00f;
    (*this).AIUseCooldown.Min = 7.000000000e+00f;
    (*this).AIUseCooldown.Max = 1.000000000e+01f;
    (*this).AnimationRotationOffset.Yaw = -1.800000000e+02f;
    (*this).AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkAudioComponent"));
    (*this).PitchLimit = 4.500000000e+01f;
    (*this).PitchDotLimit = 7.071067691e-01f;
    (*this).YawLimit = 4.500000000e+01f;
    (*this).YawDotLimit = 7.071067691e-01f;
    (*this).InteractiveComponent = CreateDefaultSubobject<UIGS_AnimatedInteractiveComponentSimple>(TEXT("Interactive"));
    (*this).InteractiveBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractiveBoxComponent"));
    (*this).ReloadTimelineComponent = CreateDefaultSubobject<UTimelineComponent>(TEXT("ReloadTimelineComponent"));
    (*this).ReloadCurve = CreateDefaultSubobject<UCurveFloat>(TEXT("ReloadCurve"));
    (*this).Reloader = CreateDefaultSubobject<UIGS_SimpleReloader>(TEXT("Reloader"));
    (*this).DefaultMagazineCount = 3;
    (*this).lastActiveSlot = EIGS_WieldableSlot::S_Unarmed;
    auto& gen0 = (*this).WeaponModsArray;
    gen0.Empty();
    gen0.AddDefaulted(8);
    (*this).CanReloadInADS = false;
    (*this).bReplicates = true;
    (*AActor::StaticClass()->FindPropertyByName("RemoteRole")->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(&(*this), 0)) = ROLE_SimulatedProxy;
    (*this).NetDormancy = DORM_Initial;
    (*this).InteractiveComponent->SetupAttachment((*this).RootComponent);
    (*this).InteractiveBoxComponent->SetupAttachment((*this).RootComponent);
    (*this).AkComponent->SetupAttachment((*this).RootComponent);
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


