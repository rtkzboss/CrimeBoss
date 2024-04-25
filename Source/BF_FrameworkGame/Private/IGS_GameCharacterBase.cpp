#include "IGS_GameCharacterBase.h"
#include "AkComponent.h"
#include "IGS_DynamicMaterialHandlerComponent.h"
#include "IGS_DangerAreaComponent.h"
#include "IGS_IdleAvoidanceComponent.h"
#include "IGS_ItemDropComponent.h"
#include "IGS_RollbackComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_GameCharacterBase::AIGS_GameCharacterBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnedOnPoint = NULL;
    this->DynamicMaterialHandlerComponent = CreateDefaultSubobject<UIGS_DynamicMaterialHandlerComponent>(TEXT("DynamicMaterialHandlerComponent"));
    this->SettingsOverride = NULL;
    this->SpawnedFromMonsterCloset = false;
    this->R_IsInTransition = false;
    this->TeamSide = EIGS_TeamSideEnum::TS_Unknown;
    this->UnitSpecialization = EIGS_UnitSpecialization::US_None;
    this->CharacterWieldable3PVModelScaleMultiplier = 1.00f;
    this->CharacterWieldableFPVModelScaleMultiplier = 1.00f;
    this->RollbackComponent = CreateDefaultSubobject<UIGS_RollbackComponent>(TEXT("RollbackComponent"));
    this->AkAudioComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkAudioComponent"));
    this->DangerAreaComponent = CreateDefaultSubobject<UIGS_DangerAreaComponent>(TEXT("DangerAreaComp"));
    this->ItemDropComponent = CreateDefaultSubobject<UIGS_ItemDropComponent>(TEXT("ItemDropComponent"));
    this->IdleAvoidanceComponent = CreateDefaultSubobject<UIGS_IdleAvoidanceComponent>(TEXT("IdleAvoidanceComponent"));
    this->InjuryOffenceDuration = 3.00f;
    this->bHasDisabledPropCollision = false;
    this->bRegisterOnBeginPlay = true;
    this->CrouchAkAudioEvent = NULL;
    this->UncrouchAkAudioEvent = NULL;
    this->SlideAkAudioEvent = NULL;
    this->SlideStopAkAudioEvent = NULL;
    this->AkAudioComponent->SetupAttachment(RootComponent);
}

void AIGS_GameCharacterBase::RM_StopAnimation_Implementation(UAnimMontage* Montage) {
}

void AIGS_GameCharacterBase::RM_PlayAnimation_Implementation(UAnimMontage* Montage, FName SectionName, float PlayRate, float StartPosition) {
}

void AIGS_GameCharacterBase::ResetAICollisionSettings() {
}

void AIGS_GameCharacterBase::OnSpawnedByAI_Implementation(AIGS_AISpawnPoint* inSpawnPoint) {
}

void AIGS_GameCharacterBase::OnRep_IsInTransition() const {
}

void AIGS_GameCharacterBase::OnRep_DisabledPropCollision() {
}

void AIGS_GameCharacterBase::Multicast_IsInTransitionChanged_Implementation(bool inIsInTransition) {
}

AIGS_WaypointFramework* AIGS_GameCharacterBase::GetSpawnGoToWaypoint() const {
    return NULL;
}

void AIGS_GameCharacterBase::DisableAIPropCollision() {
}

void AIGS_GameCharacterBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_GameCharacterBase, R_IsInTransition);
    DOREPLIFETIME(AIGS_GameCharacterBase, bHasDisabledPropCollision);
}


