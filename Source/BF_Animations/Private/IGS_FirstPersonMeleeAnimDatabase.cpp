#include "IGS_FirstPersonMeleeAnimDatabase.h"

FIGS_FirstPersonMeleeAnimDatabase::FIGS_FirstPersonMeleeAnimDatabase() {
    (*this).EquipMontage = nullptr;
    (*this).UnequipMontage = nullptr;
    auto& gen2044 = (*this).Attack_Light_Chain;
    gen2044.Empty();
    auto& gen2045 = (*this).Attack_Heavy_Chain;
    gen2045.Empty();
    (*this).MeleePushMontage = nullptr;
    (*this).MarkMontage = nullptr;
    (*this).OneHandCalmWeaponPose = false;
    (*this).MeleePush = nullptr;
    (*this).EquipWeaponMontage = nullptr;
    (*this).UnequipWeaponMontage = nullptr;
    auto& gen2046 = (*this).WeaponAttack_Light_Chain;
    gen2046.Empty();
    auto& gen2047 = (*this).WeaponAttack_Heavy_Chain;
    gen2047.Empty();
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
    auto& gen2048 = (*this).LinkedGraphs;
    gen2048.Empty();
}

