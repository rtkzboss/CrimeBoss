#include "IGS_FirstPersonAnimationDatabaseBase.h"

FIGS_FirstPersonAnimationDatabaseBase::FIGS_FirstPersonAnimationDatabaseBase() {
    (*this).EquipMontage = nullptr;
    (*this).UnequipMontage = nullptr;
    (*this).EquipWeaponMontage = nullptr;
    (*this).UnequipWeaponMontage = nullptr;
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

