#include "IGS_CharacterAnimInstance.h"

UIGS_CharacterAnimInstance::UIGS_CharacterAnimInstance() {
    (*this).MeshRootBoneName = TEXT("Root");
    (*this).AimAtBoneName = TEXT("weapon_root_r");
    (*this).LocomotionType = EIGS_LocomotionType::BT_Normal;
    (*this).PauseAnimsDelayThreshold = 2.000000030e-01f;
}



void UIGS_CharacterAnimInstance::OnComponentHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}


UIGS_HeadAnimInstance* UIGS_CharacterAnimInstance::GetHeadAnimInstance() const {
    return NULL;
}

void UIGS_CharacterAnimInstance::EnterRadialDamageRagdollState_Implementation(const FIGS_HitInfo& inHitInfo, float inImpulse, bool inIsVelocityChange) {
}


