#include "IGS_WeaponModsHandler.h"

UIGS_WeaponModsHandler::UIGS_WeaponModsHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UIGS_WeaponModsHandler::HasWeaponModOfType(EIGS_ModType inType) const {
    return false;
}

UIGS_ModInventoryObject* UIGS_WeaponModsHandler::GetWeaponModOfType(EIGS_ModType inType) const {
    return NULL;
}

void UIGS_WeaponModsHandler::GetCurrentShooterModifications(float& outBaseDamageMultiplier, float& outEffectiveRangeMultiplier, float& outMaxRangeMultiplier, float& outRPMMultiplier) const {
}

float UIGS_WeaponModsHandler::GetCurrentReloadTimeMultiplier() const {
    return 0.0f;
}

void UIGS_WeaponModsHandler::GetCurrentRecoilModifications(float& outVerticalRecoilMultiplier, float& outHorizontalRecoilMultiplier) const {
}

int32 UIGS_WeaponModsHandler::GetCurrentMagazineCapacity() const {
    return 0;
}

void UIGS_WeaponModsHandler::GetCurrentIdleSwayIntensity(float& outIdleSwayIntensity) const {
}

void UIGS_WeaponModsHandler::GetCurrentAIStimuliMultipliers(float& outMuzzleFlashStimuliMultiplier, float& outShotSoundStimuliMultiplier) const {
}

void UIGS_WeaponModsHandler::GetCurrentAimOffset(FVector& OutLocation, FVector& OutRotation) const {
}

void UIGS_WeaponModsHandler::GetCurrentADSAndHolsterModifications(float& outHolsterTime, float& outADSInSpeedMult, float& outADSOutSpeedMult, float& outScopeInPercent, bool& outIsUsingScopeMod) const {
}

void UIGS_WeaponModsHandler::GetCurrentAccuracyModifications(float& outHipFireSpreadMultiplier, float& outADSSpreadMultiplier, float& outSpreadIncreasePerShotMultiplier, float& outMovementSpreadMultiplier) const {
}


