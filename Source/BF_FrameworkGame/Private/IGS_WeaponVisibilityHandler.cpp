#include "IGS_WeaponVisibilityHandler.h"

UIGS_WeaponVisibilityHandler::UIGS_WeaponVisibilityHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxLaserDistanceFromAimPoint = false;
    this->LaserDistanceFromAimPointOffset = 0.00f;
    this->ForceLaserAimAtPoint = false;
    this->LaserParticleSystem = NULL;
    this->LaserTortillaParticleSystem = NULL;
    this->LaserNiagaraSystem = NULL;
    this->LaserTortillaNiagaraSystem = NULL;
    this->m_LaserParticleSpawnPointName = TEXT("socket_laser_origin");
    this->m_LaserParticleBeamTargetName = TEXT("BeamTarget");
    this->m_LaserParticlePointSizeName = TEXT("LaserPointSize");
    this->MaxLaserDistance = 50000.00f;
    this->DotThreshold = 0.95f;
    this->WeaponScopeGlintNiagaraSystem = NULL;
    this->m_SightGlintNiagaraComponent = NULL;
    this->m_LaserNiagaraComponent = NULL;
    this->m_LaserParticleSystemComponent = NULL;
    this->bTraceForward = true;
}

bool UIGS_WeaponVisibilityHandler::ToggleMod() {
    return false;
}

bool UIGS_WeaponVisibilityHandler::SetModVisible(bool inVisible) {
    return false;
}

bool UIGS_WeaponVisibilityHandler::SetModActive(const EIGS_WeaponVisibilityType inType, const bool Inactive) {
    return false;
}

bool UIGS_WeaponVisibilityHandler::IsModActive() const {
    return false;
}

bool UIGS_WeaponVisibilityHandler::HasAnyModActive() const {
    return false;
}

FVector UIGS_WeaponVisibilityHandler::GetLaserDirection() const {
    return FVector{};
}


