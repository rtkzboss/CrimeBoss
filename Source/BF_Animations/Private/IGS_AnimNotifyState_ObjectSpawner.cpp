#include "IGS_AnimNotifyState_ObjectSpawner.h"

UIGS_AnimNotifyState_ObjectSpawner::UIGS_AnimNotifyState_ObjectSpawner() {
    this->WieldingHand = EIGS_WieldingHand::LeftHand;
    this->AttachmentSocket = TEXT("weapon_root_l_socket");
    this->LocationAttachmentRule = EAttachmentRule::SnapToTarget;
    this->RotationAttachmentRule = EAttachmentRule::SnapToTarget;
    this->ScaleAttachmentRule = EAttachmentRule::SnapToTarget;
    this->ActorClassHard = NULL;
}


