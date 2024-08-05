#include "IGS_WeaponVisibilityHandler.h"
#include "ComponentInstanceDataCache.h"

UIGS_WeaponVisibilityHandler::UIGS_WeaponVisibilityHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).m_LaserParticleSpawnPointName = TEXT("socket_laser_origin");
    (*this).m_LaserParticleBeamTargetName = TEXT("BeamTarget");
    (*this).m_LaserParticlePointSizeName = TEXT("LaserPointSize");
    (*this).MaxLaserDistance = 5.000000000e+04f;
    (*this).DotThreshold = 9.499999881e-01f;
    (*this).bTraceForward = true;
    (*this).PrimaryComponentTick.TickGroup = TG_PostUpdateWork;
    (*this).PrimaryComponentTick.EndTickGroup = TG_PostUpdateWork;
    (*this).PrimaryComponentTick.bCanEverTick = true;
    (*this).PrimaryComponentTick.bStartWithTickEnabled = false;
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


