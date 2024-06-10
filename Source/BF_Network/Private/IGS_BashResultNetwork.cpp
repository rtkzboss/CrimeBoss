#include "IGS_BashResultNetwork.h"

FIGS_BashResultNetwork::FIGS_BashResultNetwork() {
    (*this).HitResult.TraceStart.X = 0.000000000e+00f;
    (*this).HitResult.TraceStart.Y = 0.000000000e+00f;
    (*this).HitResult.TraceStart.Z = 0.000000000e+00f;
    (*this).HitResult.TraceEnd.X = 0.000000000e+00f;
    (*this).HitResult.TraceEnd.Y = 0.000000000e+00f;
    (*this).HitResult.TraceEnd.Z = 0.000000000e+00f;
    (*this).HitResult.ImpactPointOffset.X = 0.000000000e+00f;
    (*this).HitResult.ImpactPointOffset.Y = 0.000000000e+00f;
    (*this).HitResult.ImpactPointOffset.Z = 0.000000000e+00f;
    (*this).HitResult.ImpactNormal.X = 0.000000000e+00f;
    (*this).HitResult.ImpactNormal.Y = 0.000000000e+00f;
    (*this).HitResult.ImpactNormal.Z = 0.000000000e+00f;
    (*this).HitResult.Actor = nullptr;
    (*this).HitResult.Component = nullptr;
    (*this).HitResult.PhysMaterial = nullptr;
    (*this).HitResult.BoneName = NAME_None;
    (*this).HitResult.Distance = 0.000000000e+00f;
    (*this).HitResult.bBlockingHit = false;
    (*this).HitResult.bIsPenetratingHit = false;
    (*this).Damage = 0.000000000e+00f;
    (*this).DamageType = nullptr;
    (*this).ImpactType = nullptr;
    (*this).BashingCharacter = nullptr;
    (*this).bHit = false;
    (*this).bIsUnarmedMelee = false;
}

