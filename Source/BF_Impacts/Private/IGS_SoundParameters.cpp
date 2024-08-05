#include "IGS_SoundParameters.h"
#include "EIGS_MovementSlope.h"

FIGS_SoundParameters::FIGS_SoundParameters() {
    (*this).FootstepParameters.UseThis = false;
    (*this).FootstepParameters.WalkSpeed = 0.000000000e+00f;
    (*this).FootstepParameters.SlopeType = EIGS_MovementSlope::FSW_Normal;
    (*this).FootstepParameters.FootstepAkSwitch = nullptr;
    (*this).FootstepParameters.ShoeAkSwitch = nullptr;
    (*this).MeleeParameters.UseThis = false;
    (*this).MeleeParameters.WeaponNameAkSwitch = nullptr;
    (*this).HitParameters.UseThis = false;
    (*this).HitParameters.Mass = 0.000000000e+00f;
    (*this).HitParameters.Velocity = 0.000000000e+00f;
    (*this).HitParameters.Instigator = nullptr;
    (*this).HitParameters.Cooldown = 0.000000000e+00f;
    (*this).CustomAkComponent = nullptr;
    (*this).PhysicalSurface = 0;
    (*this).IsPlayer = false;
    (*this).IgnoreOptimizations = false;
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).PoolTags, 0)).Empty();
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).PoolTags, 0)).Empty();
}

