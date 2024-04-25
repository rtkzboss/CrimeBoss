#include "IGS_CharacterAnimInstance.h"

UIGS_CharacterAnimInstance::UIGS_CharacterAnimInstance() {
    this->UseBlueprintDeathImplementation = false;
    this->Speed = 0.00f;
    this->DeathAnimationEnded = false;
    this->MeshRootBoneName = TEXT("Root");
    this->PitchAim = 0.00f;
    this->AimAtBoneName = TEXT("weapon_root_r");
    this->AimDisabled = false;
    this->LookAtEnabled = false;
    this->LeaningDirection = EIGS_CharacterLeaningDirectionEnum::None;
    this->SpecialDeathNotifyState = EIGS_SpecialDeathNotifyState::SD_None;
    this->Jump = false;
    this->Crouching = false;
    this->IsMoving = false;
    this->SlopeNormalized = 0.00f;
    this->CharacterAnimHealthState = EIGS_CharacterHealthAnimState::EBF_Alive;
    this->LeftHandIKAlpha = 0.00f;
    this->RightHandIKAlpha = 0.00f;
    this->ReferencePose = false;
    this->LocomotionType = EIGS_LocomotionType::BT_Normal;
    this->LODLevel = 0;
    this->LOD1Plus = false;
    this->LOD2Plus = false;
    this->LOD3Plus = false;
    this->ReduceWork = false;
    this->PauseAnimsDelayThreshold = 0.20f;
    this->HealthState = EIGS_HealthState::HS_Normal;
    this->PreDeathVelocity = 0.00f;
}



void UIGS_CharacterAnimInstance::OnComponentHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}


UIGS_HeadAnimInstance* UIGS_CharacterAnimInstance::GetHeadAnimInstance() const {
    return NULL;
}

void UIGS_CharacterAnimInstance::EnterRadialDamageRagdollState_Implementation(const FIGS_HitInfo& inHitInfo, float inImpulse, bool inIsVelocityChange) {
}


