#include "IGS_ImpactParameters.h"
#include "EIGS_MovementSlope.h"
#include "GameplayTagContainer.h"

FIGS_ImpactParameters::FIGS_ImpactParameters() {
    (*this).SoundParameters.FootstepParameters.UseThis = false;
    (*this).SoundParameters.FootstepParameters.WalkSpeed = 0.000000000e+00f;
    (*this).SoundParameters.FootstepParameters.SlopeType = EIGS_MovementSlope::FSW_Normal;
    (*this).SoundParameters.MeleeParameters.UseThis = false;
    (*this).SoundParameters.HitParameters.UseThis = false;
    (*this).SoundParameters.HitParameters.Mass = 0.000000000e+00f;
    (*this).SoundParameters.HitParameters.Velocity = 0.000000000e+00f;
    (*this).SoundParameters.HitParameters.Instigator = nullptr;
    (*this).SoundParameters.HitParameters.Cooldown = 0.000000000e+00f;
    (*this).SoundParameters.PhysicalSurface = 0;
    (*this).SoundParameters.IsPlayer = false;
    (*this).SoundParameters.IgnoreOptimizations = false;
    auto& gen3410 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).SoundParameters.PoolTags, 0));
    gen3410.Empty();
    auto& gen3411 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).SoundParameters.PoolTags, 0));
    gen3411.Empty();
    (*this).ParticleParameters.Power = 1.000000000e+00f;
    (*this).ParticleParameters.BoneName = NAME_None;
    (*this).ParticleParameters.IgnoreOptimizations = false;
    auto& gen3412 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).ParticleParameters.PoolTags, 0));
    gen3412.Empty();
    auto& gen3413 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).ParticleParameters.PoolTags, 0));
    gen3413.Empty();
    (*this).DecalParameters.RandomRoll = true;
    (*this).DecalParameters.RollDegree = 0.000000000e+00f;
    (*this).DecalParameters.AttachToSocket = NAME_None;
    (*this).DecalParameters.IgnoreOptimizations = false;
    auto& gen3414 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).DecalParameters.PoolTags, 0));
    gen3414.Empty();
    auto& gen3415 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).DecalParameters.PoolTags, 0));
    gen3415.Empty();
    (*this).ID = nullptr;
    (*this).SpawnTransform = FTransform(FQuat(0.000000000e+00,0.000000000e+00,0.000000000e+00,1.000000000e+00), FVector(0.000000000e+00,0.000000000e+00,0.000000000e+00), FVector(1.000000000e+00,1.000000000e+00,1.000000000e+00));
}

