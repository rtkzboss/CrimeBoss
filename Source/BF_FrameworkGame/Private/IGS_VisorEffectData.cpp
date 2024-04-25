#include "IGS_VisorEffectData.h"

FIGS_VisorEffectData::FIGS_VisorEffectData() {
    this->CameraShakeIntensityBloodSplatter = 0.00f;
    this->CameraShakeIntensityIncrementBloodSplatter = 0.00f;
    this->DrillSparksUpdateInterval = 0.00f;
    this->DrillSparksDefaultRelativeOffset = 0.00f;
    this->DrillSparksMaxViewAngleOffset = 0.00f;
    this->MinDotToActivateSparks = 0.00f;
    this->SparksSpawnRate = 0.00f;
    this->SparksSpawnProbability = 0.00f;
    this->NumberOfTextures = 0;
    this->MaximumFPS = 0.00f;
    this->EffectPreventionChannel = ECC_WorldStatic;
    this->StandardCurvesDuration = 0.00f;
    this->VisorSmudgeFxDuration = 0.00f;
    this->VisorSplatterFxDuration = 0.00f;
    this->ChanceToSpawnBloodSplatter = 0.00f;
    this->SmudgesOverlapDistanceMultiplier = 0.00f;
    this->ShakeOverlapDistanceMultiplier = 0.00f;
    this->ShakeMuffledOverlapDistanceMultiplier = 0.00f;
    this->ShakeIntensity = 0.00f;
    this->MuffledExplosionShakeMultiplier = 0.00f;
    this->BloodSplatterDistance = 0.00f;
    this->DeadBodySplatterWaitSeconds = 0.00f;
    this->DeadBodySplatterChancePercent = 0.00f;
    this->TimeToWaitAfterBloodSplatterShake = 0.00f;
    this->TimeToWaitAfterExplosionShake = 0.00f;
}

