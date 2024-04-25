#include "IGS_WieldableBase.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "IGS_DynamicMaterialHandlerComponent.h"

AIGS_WieldableBase::AIGS_WieldableBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("WieldableMesh"));
    this->bHasCollision = false;
    this->bIsUsingPrimaryAction = false;
    this->bIsUsingSecondaryAction = false;
    this->bIsAiming = false;
    this->bIsHolstering = false;
    this->bIsUnholstering = false;
    this->CurrentZoomLevel = 0;
    this->WieldableMPCInstance = NULL;
    this->DynamicMaterialHandlerComponent = CreateDefaultSubobject<UIGS_DynamicMaterialHandlerComponent>(TEXT("DynamicMaterialHandlerComponent"));
    this->WieldableMesh = (USkeletalMeshComponentBudgeted*)RootComponent;
}

bool AIGS_WieldableBase::UsesAmmo() {
    return false;
}

void AIGS_WieldableBase::ToggleVisibilityMod() {
}

void AIGS_WieldableBase::ThrowAway_Implementation(bool inForceSyncLoads) {
}

void AIGS_WieldableBase::SecondaryAction(EIGS_WieldableAction InAction) {
}

void AIGS_WieldableBase::Reload() {
}

void AIGS_WieldableBase::PrimaryAction(EIGS_WieldableAction InAction) {
}

void AIGS_WieldableBase::OnWieldableIsReady_Implementation() {
}

void AIGS_WieldableBase::OnWieldableIsBeingRemoved_Implementation() {
}

void AIGS_WieldableBase::OnWieldableAim_Implementation(bool inIsAiming) {
}


void AIGS_WieldableBase::MagCheck() {
}

bool AIGS_WieldableBase::IsUsingSecondaryAction() const {
    return false;
}

bool AIGS_WieldableBase::IsUsingPrimaryAction() const {
    return false;
}

bool AIGS_WieldableBase::IsUnholstering() const {
    return false;
}

bool AIGS_WieldableBase::IsTortilla() const {
    return false;
}

bool AIGS_WieldableBase::IsReloading() const {
    return false;
}

bool AIGS_WieldableBase::IsHolsteringOrUnholstering() const {
    return false;
}

bool AIGS_WieldableBase::IsHolstering() const {
    return false;
}

bool AIGS_WieldableBase::IsAiming() const {
    return false;
}

void AIGS_WieldableBase::InterruptReload(EIGS_ReloadInterruptReasonEnum inReason, bool inIsImmediate, bool inForce) {
}

void AIGS_WieldableBase::InspectWieldable() {
}

bool AIGS_WieldableBase::HasMultipleZoomLevels() const {
    return false;
}

bool AIGS_WieldableBase::HasFullAmmo() {
    return false;
}

bool AIGS_WieldableBase::HasAmmo() {
    return false;
}

EIGS_ItemType AIGS_WieldableBase::GetWieldableType() const {
    return EIGS_ItemType::Item_Weapon;
}

UIGS_WieldableInventoryObjectBase* AIGS_WieldableBase::GetWieldableObject() const {
    return NULL;
}

UIGS_InventoryObjectFramework* AIGS_WieldableBase::GetInventoryObject() const {
    return NULL;
}

void AIGS_WieldableBase::ForceStopActions() {
}

void AIGS_WieldableBase::Drop_Implementation(bool inForceSyncLoads) {
}

void AIGS_WieldableBase::Die() {
}

void AIGS_WieldableBase::ChangeZoomBy(int32 inAmount) {
}

bool AIGS_WieldableBase::CanUseSecondaryAction() const {
    return false;
}

bool AIGS_WieldableBase::CanUsePrimaryAction() const {
    return false;
}

bool AIGS_WieldableBase::CanUseActions() const {
    return false;
}

bool AIGS_WieldableBase::CanThrowAway_Implementation(bool inForceSyncLoads) {
    return false;
}

bool AIGS_WieldableBase::CanReload() {
    return false;
}

bool AIGS_WieldableBase::CanLean() const {
    return false;
}

bool AIGS_WieldableBase::CanInterruptReload() {
    return false;
}

bool AIGS_WieldableBase::CanDropOrThrowInternal(bool inForceSyncLoads) {
    return false;
}

bool AIGS_WieldableBase::CanDrop_Implementation(bool inForceSyncLoads) {
    return false;
}

bool AIGS_WieldableBase::CanAim() const {
    return false;
}

int32 AIGS_WieldableBase::AmmoCount() {
    return 0;
}


