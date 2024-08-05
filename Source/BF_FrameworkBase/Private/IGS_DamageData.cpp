#include "IGS_DamageData.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_DamageEventType.h"

FIGS_DamageData::FIGS_DamageData() {
    (*this).Health = 0.000000000e+00f;
    (*this).Shield = 0.000000000e+00f;
    (*this).Damage = 0.000000000e+00f;
    (*this).HitInfo.DamageTypeClass = nullptr;
    (*this).HitInfo.Instigator = nullptr;
    (*this).HitInfo.InstigatorPawn = nullptr;
    (*this).HitInfo.SourceActor = nullptr;
    (*this).HitInfo.TargetActor = nullptr;
    (*this).HitInfo.TargetComponent = nullptr;
    (*this).HitInfo.PhysicalMaterialHit = nullptr;
    (*this).HitInfo.Bone = NAME_None;
    (*this).HitInfo.ImpactPoint.X = 0.000000000e+00f;
    (*this).HitInfo.ImpactPoint.Y = 0.000000000e+00f;
    (*this).HitInfo.ImpactPoint.Z = 0.000000000e+00f;
    (*this).HitInfo.Origin.X = 0.000000000e+00f;
    (*this).HitInfo.Origin.Y = 0.000000000e+00f;
    (*this).HitInfo.Origin.Z = 0.000000000e+00f;
    (*this).HitInfo.ImpactNormal.X = 0.000000000e+00f;
    (*this).HitInfo.ImpactNormal.Y = 0.000000000e+00f;
    (*this).HitInfo.ImpactNormal.Z = 1.000000000e+00f;
    (*this).HitInfo.ShotFromDirection.X = 0.000000000e+00f;
    (*this).HitInfo.ShotFromDirection.Y = 0.000000000e+00f;
    (*this).HitInfo.ShotFromDirection.Z = 1.000000000e+00f;
    (*this).HitInfo.Radius = 0.000000000e+00f;
    (*this).HitInfo.DamageEventType = EIGS_DamageEventType::Any;
    (*this).HitInfo.InstigatorTeamSide = EIGS_TeamSideEnum::TS_Unknown;
    (*this).HitInfo.bIsHeadshot = false;
}

