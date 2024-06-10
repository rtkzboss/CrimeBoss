#include "IGS_SoundParameters.h"
#include "EIGS_MovementSlope.h"

FIGS_SoundParameters::FIGS_SoundParameters() {
    (*this).FootstepParameters.UseThis = false;
    (*this).FootstepParameters.WalkSpeed = 0.000000000e+00f;
    (*this).FootstepParameters.SlopeType = EIGS_MovementSlope::FSW_Normal;
    (*this).MeleeParameters.UseThis = false;
    (*this).HitParameters.UseThis = false;
    (*this).HitParameters.Mass = 0.000000000e+00f;
    (*this).HitParameters.Velocity = 0.000000000e+00f;
    (*this).HitParameters.Instigator = nullptr;
    (*this).HitParameters.Cooldown = 0.000000000e+00f;
    (*this).PhysicalSurface = 0;
    (*this).IsPlayer = false;
    (*this).IgnoreOptimizations = false;
    auto& gen3420 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).PoolTags, 0));
    gen3420.Empty();
    auto& gen3421 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).PoolTags, 0));
    gen3421.Empty();
}

