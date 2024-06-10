#include "IGS_BashResult.h"

FIGS_BashResult::FIGS_BashResult() {
    (*this).BashingCharacter = nullptr;
    (*this).HitResult.FaceIndex = 0;
    (*this).HitResult.Time = 1.000000000e+00f;
    (*this).HitResult.Distance = 0.000000000e+00f;
    (*this).HitResult.Location.X = 0.000000000e+00f;
    (*this).HitResult.Location.Y = 0.000000000e+00f;
    (*this).HitResult.Location.Z = 0.000000000e+00f;
    (*this).HitResult.ImpactPoint.X = 0.000000000e+00f;
    (*this).HitResult.ImpactPoint.Y = 0.000000000e+00f;
    (*this).HitResult.ImpactPoint.Z = 0.000000000e+00f;
    (*this).HitResult.Normal.X = 0.000000000e+00f;
    (*this).HitResult.Normal.Y = 0.000000000e+00f;
    (*this).HitResult.Normal.Z = 0.000000000e+00f;
    (*this).HitResult.ImpactNormal.X = 0.000000000e+00f;
    (*this).HitResult.ImpactNormal.Y = 0.000000000e+00f;
    (*this).HitResult.ImpactNormal.Z = 0.000000000e+00f;
    (*this).HitResult.TraceStart.X = 0.000000000e+00f;
    (*this).HitResult.TraceStart.Y = 0.000000000e+00f;
    (*this).HitResult.TraceStart.Z = 0.000000000e+00f;
    (*this).HitResult.TraceEnd.X = 0.000000000e+00f;
    (*this).HitResult.TraceEnd.Y = 0.000000000e+00f;
    (*this).HitResult.TraceEnd.Z = 0.000000000e+00f;
    (*this).HitResult.PenetrationDepth = 0.000000000e+00f;
    (*this).HitResult.Item = 0;
    (*this).HitResult.ElementIndex = 0;
    (*this).HitResult.bBlockingHit = false;
    (*this).HitResult.bStartPenetrating = false;
    (*this).HitResult.PhysMaterial = nullptr;
    (*this).HitResult.Actor = nullptr;
    (*this).HitResult.Component = nullptr;
    (*this).HitResult.BoneName = NAME_None;
    (*this).HitResult.MyBoneName = NAME_None;
    (*this).Damage = 0.000000000e+00f;
    (*this).DamageType = nullptr;
    (*this).ImpactType = nullptr;
    (*this).bHit = false;
    (*this).bIsAI = false;
    (*this).bIsUnarmedMelee = false;
}

