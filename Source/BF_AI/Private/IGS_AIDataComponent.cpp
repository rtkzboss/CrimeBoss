#include "IGS_AIDataComponent.h"

UIGS_AIDataComponent::UIGS_AIDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LastEnemyHitTime = -340282346638528859811704183484516925440.00f;
    this->LastShootTime = -340282346638528859811704183484516925440.00f;
    this->LastInjuredTime = -340282346638528859811704183484516925440.00f;
    this->ForcedWeaponType = EIGS_SwitchWeaponTask_WeaponType::WT_Unknown;
    this->GeneralReactionsEnabled = true;
    this->HadSpreadIncreased = false;
    this->LastMoveTime = -1.00f;
    this->CanEscape = true;
    this->CanUseMonsterCloset = false;
    this->LastWaypoint = NULL;
    this->CurrentWaypoint = NULL;
    this->WaypointSpeed = EIGS_Speed::MS_Walk;
    this->WayPointCrouch = false;
}

FIGS_ShootingOverride UIGS_AIDataComponent::GetShootingOverride() const {
    return FIGS_ShootingOverride{};
}


