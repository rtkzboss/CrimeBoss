#include "IGS_AnimNotify_ObjectSpawner.h"

UIGS_AnimNotify_ObjectSpawner::UIGS_AnimNotify_ObjectSpawner() {
    this->DespawnNotify = false;
    this->WieldingHand = EIGS_WieldingHand::LeftHand;
    this->AttachmentSocket = TEXT("weapon_root_l_socket");
    this->LocationAttachmentRule = EAttachmentRule::SnapToTarget;
    this->RotationAttachmentRule = EAttachmentRule::SnapToTarget;
    this->ScaleAttachmentRule = EAttachmentRule::SnapToTarget;
    this->ActorClassHard = NULL;
}


