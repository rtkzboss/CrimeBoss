#include "IGS_FirstPersonMeleeAnimDatabase.h"

FIGS_FirstPersonMeleeAnimDatabase::FIGS_FirstPersonMeleeAnimDatabase() {
    (*this).ID = nullptr;
    (*this).EquipMontage = nullptr;
    (*this).UnequipMontage = nullptr;
    (*this).Attack_Light_Chain.Empty();
    (*this).Attack_Heavy_Chain.Empty();
    (*this).MeleePushMontage = nullptr;
    (*this).MarkMontage = nullptr;
    (*this).OneHandCalmWeaponPose = false;
    (*this).MeleePush = nullptr;
    (*this).EquipWeaponMontage = nullptr;
    (*this).UnequipWeaponMontage = nullptr;
    (*this).WeaponAttack_Light_Chain.Empty();
    (*this).WeaponAttack_Heavy_Chain.Empty();
    (*this).MarkWeaponMontage = nullptr;
    (*this).Locomotion.IdleWalkBlendSpace = nullptr;
    (*this).Locomotion.JumpStart = nullptr;
    (*this).Locomotion.JumpLoop = nullptr;
    (*this).Locomotion.JumpEnd = nullptr;
    (*this).Locomotion.SprintStart = nullptr;
    (*this).Locomotion.SprintLoop = nullptr;
    (*this).Locomotion.SprintEnd = nullptr;
    (*this).Locomotion.SprintInterrupt = nullptr;
    (*this).Locomotion.SwingAim = nullptr;
    (*this).Locomotion.SwingCrouch = nullptr;
    (*this).Locomotion.SwingHip = nullptr;
    (*this).Additive.ShootAdditive = nullptr;
    (*this).SpecialAnimations.WalkieTalkieEquipMontage = nullptr;
    (*this).SpecialAnimations.HandsetEquipMontage = nullptr;
    (*this).SpecialAnimations.OpenDoorInteractionMontage = nullptr;
    (*this).SpecialAnimations.CloseDoorInteractionMontage = nullptr;
    (*this).SpecialAnimations.PickupInteractionMontage = nullptr;
    (*this).SpecialAnimations.TakeWeaponMontage = nullptr;
    (*this).SpecialAnimations.SpecialTakeWeaponMontage = nullptr;
    (*this).SpecialAnimations.WeaponInteractonMontage = nullptr;
    (*this).LinkedGraphs.Empty();
}

