#include "IGS_HitInfo.h"

FIGS_HitInfo::FIGS_HitInfo() {
    (*this).DamageTypeClass = nullptr;
    (*this).Instigator = nullptr;
    (*this).InstigatorPawn = nullptr;
    (*this).SourceActor = nullptr;
    (*this).TargetActor = nullptr;
    (*this).TargetComponent = nullptr;
    (*this).PhysicalMaterialHit = nullptr;
    (*this).Bone = NAME_None;
    (*this).ImpactPoint.X = 0.000000000e+00f;
    (*this).ImpactPoint.Y = 0.000000000e+00f;
    (*this).ImpactPoint.Z = 0.000000000e+00f;
    (*this).Origin.X = 0.000000000e+00f;
    (*this).Origin.Y = 0.000000000e+00f;
    (*this).Origin.Z = 0.000000000e+00f;
    (*this).ImpactNormal.X = 0.000000000e+00f;
    (*this).ImpactNormal.Y = 0.000000000e+00f;
    (*this).ImpactNormal.Z = 1.000000000e+00f;
    (*this).ShotFromDirection.X = 0.000000000e+00f;
    (*this).ShotFromDirection.Y = 0.000000000e+00f;
    (*this).ShotFromDirection.Z = 1.000000000e+00f;
    (*this).Radius = 0.000000000e+00f;
    (*this).DamageEventType = EIGS_DamageEventType::Any;
    (*this).InstigatorTeamSide = EIGS_TeamSideEnum::TS_Unknown;
    (*this).bIsHeadshot = false;
}

