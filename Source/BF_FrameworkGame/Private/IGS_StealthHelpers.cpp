#include "IGS_StealthHelpers.h"

UIGS_StealthHelpers::UIGS_StealthHelpers() {
}

void UIGS_StealthHelpers::WholeMissionIsTresspassing(UObject* inWCO, bool securityArea) {
}

void UIGS_StealthHelpers::TresspassingAllowed(UObject* inWCO) {
}

void UIGS_StealthHelpers::ReportVaultOpeningStart(AActor* inVaultActor, FVector inLobyPosition) {
}

void UIGS_StealthHelpers::ReportVaultOpeningEnd(AActor* inVaultActor, bool inSuccesfullyOpen) {
}

void UIGS_StealthHelpers::ReportUnarmedMelee(AIGS_GameCharacterFramework* inInstigator) {
}

void UIGS_StealthHelpers::ReportThrow(AIGS_GameCharacterFramework* inInstigator, AIGS_ThrowableProjectileBase* inProjectile) {
}

void UIGS_StealthHelpers::ReportSusOpenedStart(AActor* inObject, AIGS_GameCharacterFramework* inInstigator) {
}

void UIGS_StealthHelpers::ReportSusOpenedEnd(AActor* inObject) {
}

AIGS_SuspicionEventActor* UIGS_StealthHelpers::ReportSusGlider(AActor* inGlider) {
    return NULL;
}

void UIGS_StealthHelpers::ReportSubdue(AIGS_GameCharacterFramework* inInstigator, AIGS_GameCharacterFramework* inTarget) {
}

void UIGS_StealthHelpers::ReportPhotoCameraStart(AIGS_GameCharacterFramework* inInstigator) {
}

void UIGS_StealthHelpers::ReportPhotoCameraEnd(AIGS_GameCharacterFramework* inInstigator) {
}

void UIGS_StealthHelpers::ReportMelee(AIGS_GameCharacterFramework* inInstigator) {
}

void UIGS_StealthHelpers::ReportLootingStarts(AIGS_GameCharacterFramework* inCharacter) {
}

void UIGS_StealthHelpers::ReportLootingEnd(AIGS_GameCharacterFramework* inCharacter) {
}

void UIGS_StealthHelpers::ReportLockpickStarts(AIGS_GameCharacterFramework* inCharacter) {
}

void UIGS_StealthHelpers::ReportLockpickEnd(AIGS_GameCharacterFramework* inCharacter) {
}

void UIGS_StealthHelpers::ReportCameraJammerStart(AIGS_GameCharacterFramework* inInstigator) {
}

void UIGS_StealthHelpers::ReportCameraJammerEnd(AIGS_GameCharacterFramework* inInstigator) {
}

void UIGS_StealthHelpers::ReportBash(AIGS_GameCharacterFramework* inInstigator) {
}

void UIGS_StealthHelpers::ReportAlarmSirens(UObject* inWCO, FVector InLocation, float inLoudness) {
}

bool UIGS_StealthHelpers::IsTrespassing(AIGS_GameCharacterFramework* inCharacter) {
    return false;
}

void UIGS_StealthHelpers::CreateLockpickedEvents(UObject* inWCO, FVector InLocation, AActor* inInstigator) {
}

void UIGS_StealthHelpers::CreateBrokenEventsTwoSided(UObject* inWCO, FVector InLocation, FVector inForward, AActor* inInstigator, bool inIsImportant) {
}

void UIGS_StealthHelpers::CreateBrokenEvents(UObject* inWCO, FVector InLocation, AActor* inInstigator, bool inIsImportant, float inLoudness) {
}


