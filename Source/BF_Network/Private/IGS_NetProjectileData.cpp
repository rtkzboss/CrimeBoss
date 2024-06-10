#include "IGS_NetProjectileData.h"

FIGS_NetProjectileData::FIGS_NetProjectileData() {
    (*this).NetProjectileHitResult.TraceStart.X = 0.000000000e+00f;
    (*this).NetProjectileHitResult.TraceStart.Y = 0.000000000e+00f;
    (*this).NetProjectileHitResult.TraceStart.Z = 0.000000000e+00f;
    (*this).NetProjectileHitResult.TraceEnd.X = 0.000000000e+00f;
    (*this).NetProjectileHitResult.TraceEnd.Y = 0.000000000e+00f;
    (*this).NetProjectileHitResult.TraceEnd.Z = 0.000000000e+00f;
    (*this).NetProjectileHitResult.ImpactPointOffset.X = 0.000000000e+00f;
    (*this).NetProjectileHitResult.ImpactPointOffset.Y = 0.000000000e+00f;
    (*this).NetProjectileHitResult.ImpactPointOffset.Z = 0.000000000e+00f;
    (*this).NetProjectileHitResult.ImpactNormal.X = 0.000000000e+00f;
    (*this).NetProjectileHitResult.ImpactNormal.Y = 0.000000000e+00f;
    (*this).NetProjectileHitResult.ImpactNormal.Z = 0.000000000e+00f;
    (*this).NetProjectileHitResult.BoneName = NAME_None;
    (*this).NetProjectileHitResult.Distance = 0.000000000e+00f;
    (*this).NetProjectileHitResult.bBlockingHit = false;
    (*this).NetProjectileHitResult.bIsPenetratingHit = false;
    (*this).NetProjectileHitData.Damage = 0.000000000e+00f;
    (*this).NetProjectileHitData.DamageType = nullptr;
}

