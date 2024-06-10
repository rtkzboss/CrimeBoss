#include "IGS_WeaponBase.h"
#include "Components/ArrowComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/PointLightComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SpotLightComponent.h"
#include "Components/StaticMeshComponent.h"
#include "NiagaraComponent.h"
#include "IGS_BasherComponent.h"
#include "IGS_MuzzleFlashHandlerComponent.h"
#include "IGS_WeaponAccuracyComponent.h"
#include "IGS_WeaponDynamicScopeHandler.h"
#include "IGS_WeaponModsHandler.h"
#include "IGS_WeaponRecoilComponent.h"
#include "IGS_WeaponSkinHandler.h"
#include "IGS_WeaponVisibilityHandler.h"

AIGS_WeaponBase::AIGS_WeaponBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SightModMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SightModMesh"));
    this->DynamicScopeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DynamicScopeModMesh"));
    this->VisibilityModMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisibilityModMesh"));
    this->BarrelModMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BarrelModMesh"));
    this->GripModMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GripModMesh"));
    this->MagazineModMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MagazineModMesh"));
    this->SecondMagazineModMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SecondMagazineModMesh"));
    this->StockModMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StockModMesh"));
    this->WeaponModsArray.AddDefaulted(8);
    this->LaserArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("LaserArrow"));
    this->FlashSpotLight = CreateDefaultSubobject<USpotLightComponent>(TEXT("FlashSpotLight"));
    this->FlashPointLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("FlashPointLight"));
    this->MuzzleFlashHandlerComponent = CreateDefaultSubobject<UIGS_MuzzleFlashHandlerComponent>(TEXT("Muzzle Flash Handler Component"));
    this->MuzzleFlashRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Muzzle Flash Root"));
    this->MuzzleFlashParticleComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Muzzle Flash Particle"));
    this->MuzzleFlashParticleComponentCascade = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Muzzle Flash Cascade Particle"));
    this->BarrelSmokeParticleComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Barell Smoke Particle"));
    this->MuzzleFlashLight3PV = CreateDefaultSubobject<UPointLightComponent>(TEXT("Muzzle Flash Light 3PV"));
    this->MuzzleFlashLightFPV = CreateDefaultSubobject<UPointLightComponent>(TEXT("Muzzle Flash Light FPV"));
    this->MuzzleFlashLightFPVSecondary = CreateDefaultSubobject<UPointLightComponent>(TEXT("Muzzle Flash Light FPV Secondary"));
    this->bDisableAim = false;
    this->bAlwaysShootsForward = false;
    this->ShouldUseSniperScope = false;
    this->CanReloadInADS = true;
    this->ReloadAfterLastBulletDelay = 0.20f;
    this->WeaponAccuracy = CreateDefaultSubobject<UIGS_WeaponAccuracyComponent>(TEXT("WeaponAccuracy"));
    this->WeaponRecoil = CreateDefaultSubobject<UIGS_WeaponRecoilComponent>(TEXT("WeaponRecoil"));
    this->WeaponModsHandler = CreateDefaultSubobject<UIGS_WeaponModsHandler>(TEXT("WeaponModsHandler"));
    this->WeaponSkinHandler = CreateDefaultSubobject<UIGS_WeaponSkinHandler>(TEXT("WeaponSkinHandler"));
    this->WeaponVisibilityHandler = CreateDefaultSubobject<UIGS_WeaponVisibilityHandler>(TEXT("WeaponVisibilityHandler"));
    this->WeaponDynamicScopeHandler = CreateDefaultSubobject<UIGS_WeaponDynamicScopeHandler>(TEXT("WeaponDynamicScopeHandler"));
    this->ReloaderBase = NULL;
    this->PrimaryShooter = EIGS_WeaponAttackType::AT_UNKNOWN;
    this->Basher = CreateDefaultSubobject<UIGS_BasherComponent>(TEXT("Basher"));
    this->VirtualSightSocketName = TEXT("VirtualSight");
    this->SightModMesh->SetupAttachment(RootComponent);
    this->DynamicScopeMesh->SetupAttachment(RootComponent);
    this->VisibilityModMesh->SetupAttachment(RootComponent);
    this->BarrelModMesh->SetupAttachment(RootComponent);
    this->GripModMesh->SetupAttachment(RootComponent);
    this->MagazineModMesh->SetupAttachment(RootComponent);
    this->SecondMagazineModMesh->SetupAttachment(RootComponent);
    this->StockModMesh->SetupAttachment(RootComponent);
    this->LaserArrow->SetupAttachment(RootComponent);
    this->FlashSpotLight->SetupAttachment(RootComponent);
    this->FlashPointLight->SetupAttachment(FlashSpotLight);
    this->MuzzleFlashRootComponent->SetupAttachment(RootComponent);
    this->MuzzleFlashParticleComponent->SetupAttachment(MuzzleFlashRootComponent);
    this->MuzzleFlashParticleComponentCascade->SetupAttachment(MuzzleFlashRootComponent);
    this->BarrelSmokeParticleComponent->SetupAttachment(MuzzleFlashRootComponent);
    this->MuzzleFlashLight3PV->SetupAttachment(MuzzleFlashRootComponent);
    this->MuzzleFlashLightFPV->SetupAttachment(MuzzleFlashRootComponent);
    this->MuzzleFlashLightFPVSecondary->SetupAttachment(RootComponent);
}

void AIGS_WeaponBase::StopAttack() {
}

void AIGS_WeaponBase::StopAllAttacks() {
}

void AIGS_WeaponBase::SetVisibilityMod(bool inVisible) const {
}

void AIGS_WeaponBase::SetNextShooter() {
}

void AIGS_WeaponBase::OnMagazineAmmoChanged_Implementation(int32 inAmmoInMagazine, int32 inMagazineCapacity) {
}

void AIGS_WeaponBase::OnInventoryAmmoChanged_Implementation(int32 inAmmoCount) {
}

bool AIGS_WeaponBase::IsAttacking() {
    return false;
}

UIGS_WeaponVisibilityHandler* AIGS_WeaponBase::GetWeaponVisibilityHandler() const {
    return NULL;
}

UIGS_WeaponInventoryObject* AIGS_WeaponBase::GetWeaponInventoryObject() const {
    return NULL;
}

UIGS_ReloaderBase* AIGS_WeaponBase::GetReloader() const {
    return NULL;
}

EIGS_WeaponAttackType AIGS_WeaponBase::GetCurrentShooterType() {
    return EIGS_WeaponAttackType::AT_SemiAuto;
}

UIGS_ShooterBase* AIGS_WeaponBase::GetCurrentShooterObject() const {
    return NULL;
}

void AIGS_WeaponBase::GetCurrentShooterModifications(float& outBaseDamageMultiplier, float& outEffectiveRangeMultiplier, float& outMaxRangeMultiplier, float& outRPMMultiplier) const {
}

float AIGS_WeaponBase::GetCurrentReloadTimeMultiplier() const {
    return 0.0f;
}

void AIGS_WeaponBase::GetCurrentRecoilModifications(float& outVerticalRecoilMultiplier, float& outHorizontalRecoilMultiplier) const {
}

int32 AIGS_WeaponBase::GetCurrentMagazineCapacity() const {
    return 0;
}

void AIGS_WeaponBase::GetCurrentIdleSwayIntensity(float& outIdleSwayIntensity) const {
}

void AIGS_WeaponBase::GetCurrentAttributeMultipliers(float& outWeaponDamageAttrib, float& outHipFireSpreadAttrib, float& outAdsSpreadAttrib, float& outIdleSwayIntensityAttrib, float& outAdsSpeedAttrib, float& outReloadSpeedAttrib) const {
}

void AIGS_WeaponBase::GetCurrentAIStimuliMultipliers(float& outMuzzleFlashStimuliMultiplier, float& outShotSoundStimuliMultiplier) const {
}

void AIGS_WeaponBase::GetCurrentAimOffset(FVector& OutLocation, FVector& OutRotation) const {
}

void AIGS_WeaponBase::GetCurrentADSAndHolsterModifications(float& outHolsterTime, float& outADSInSpeedMult, float& outADSOutSpeedMult, float& outScopeInPercent, bool& outIsUsingScopeMod) const {
}

void AIGS_WeaponBase::GetCurrentAccuracyModifications(float& outHipFireSpreadMultiplier, float& outADSSpreadMultiplier, float& outSpreadIncreasePerShotMultiplier, float& outMovementSpreadMultiplier) const {
}

bool AIGS_WeaponBase::DetermineTortillaUsage(APawn* inPawn) {
    return false;
}

bool AIGS_WeaponBase::CanAttack() const {
    return false;
}

void AIGS_WeaponBase::BeginAttack() {
}

void AIGS_WeaponBase::Bash() {
}


