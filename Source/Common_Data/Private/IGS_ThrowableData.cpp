#include "IGS_ThrowableData.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"
#include "EIGS_ItemType.h"
#include "EIGS_WieldableClass.h"

FIGS_ThrowableData::FIGS_ThrowableData() {
    (*this).Projectile = nullptr;
    (*this).Equipment = nullptr;
    (*this).GrenadeData.OverlapsOnExplosion = true;
    (*this).GrenadeData.bLineTraceOnOverlap = false;
    (*this).GrenadeData.LineTraceZOffset = 1.000000000e+02f;
    (*this).GrenadeData.InnerEffectRadius = 5.000000000e+02f;
    (*this).GrenadeData.OuterEffectRadius = 5.000000000e+02f;
    (*this).GrenadeData.EffectFalloff = 0.000000000e+00f;
    (*this).GrenadeData.StartTimerImmediately = false;
    (*this).GrenadeData.ExplosionTimer = 3.000000000e+00f;
    (*this).GrenadeData.DestroyAfterExplosionTime = 3.000000000e+00f;
    (*this).GrenadeData.CanBeCooked = false;
    (*this).GrenadeData.bCanAffectThrower = false;
    (*this).GrenadeData.bCanAffectFriendlies = false;
    (*this).GrenadeData.bCanAffectRobots = true;
    (*this).GrenadeData.bCanAffectHumans = true;
    (*this).GrenadeData.DealsDamage = false;
    (*this).GrenadeData.BaseDamage = 4.000000000e+02f;
    (*this).GrenadeData.MinimumDamage = 1.000000000e+02f;
    (*this).GrenadeData.ExplosionLoudness = 1.000000000e+00f;
    (*this).GrenadeData.EffectPreventionChannel = ECC_GameTraceChannel7;
    (*this).GrenadeData.DamageTypeClass = nullptr;
    (*this).GrenadeData.ShotImpactType = nullptr;
    (*this).HitImpactType = nullptr;
    (*this).HitImpactCooldown = 1.000000015e-01f;
    (*this).HitImpactCustomMass = 0.000000000e+00f;
    (*this).HitImpactUseDefaultMaterial = true;
    (*this).Bounciness = 5.000000075e-02f;
    (*this).Friction = 1.000000015e-01f;
    (*this).MinFrictionFraction = 5.000000000e-01f;
    (*this).HighThrowVector.X = 1.000000000e+00f;
    (*this).HighThrowVector.Y = 0.000000000e+00f;
    (*this).HighThrowVector.Z = 0.000000000e+00f;
    (*this).LowThrowVector.X = 1.000000000e+00f;
    (*this).LowThrowVector.Y = 0.000000000e+00f;
    (*this).LowThrowVector.Z = 0.000000000e+00f;
    (*this).HighThrowSpeed = 2.500000000e+03f;
    (*this).LowThrowSpeed = 1.500000000e+03f;
    (*this).HighThrowHeight = 1.000000000e+00f;
    (*this).LowThrowHeight = 5.000000000e-01f;
    (*this).SpawnDistance = 5.000000000e+01f;
    (*this).ThrowRotationRange.X = 3.000000000e+02f;
    (*this).ThrowRotationRange.Y = 6.000000000e+02f;
    (*this).ThrowRotationAxis.X = 1.000000000e+00f;
    (*this).ThrowRotationAxis.Y = 1.000000000e+00f;
    (*this).ThrowRotationAxis.Z = 1.000000000e+00f;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).WieldingOffence, 0)) = TEXT("Offence.Player.Wielding.Weapon");
    (*this).ItemType = EIGS_ItemType::Item_Throwable;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ItemOffence, 0)) = TEXT("Offence.Actor.Item.Weapon");
}

