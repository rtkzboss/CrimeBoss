#include "IGS_CharacterWieldablesHolderComponent.h"
#include "ComponentInstanceDataCache.h"
#include "Templates/SubclassOf.h"

UIGS_CharacterWieldablesHolderComponent::UIGS_CharacterWieldablesHolderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).CanBeUnholstered = true;
    (*this).InitialSlot = EIGS_WieldableSlot::S_Unarmed;
    (*this).CurrentSlotType = EIGS_WieldableSlot::S_Unarmed;
    (*this).LastSlotType = EIGS_WieldableSlot::S_Unarmed;
    (*this).bIsUnarmed = true;
    auto& gen0 = (*this).WieldableSlots;
    gen0.Empty();
    gen0.AddDefaulted(6);
    (*this).ReduceWeaponDamageForTeamSides = 1;
    auto& gen1 = (*TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("TagDictionary")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).AllowedWieldables, 0));
    gen1.Empty();
    gen1.AddDefaulted(1);
    auto& gen2 = (*TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("QueryTokenStream")->ContainerPtrToValuePtr<TArray<uint8>>(&(*this).AllowedWieldables, 0));
    gen2.Empty();
    gen2.AddDefaulted(5);
}

bool UIGS_CharacterWieldablesHolderComponent::WieldItem(UIGS_WieldableInventoryObjectBase* inInventoryObject) {
    return false;
}

void UIGS_CharacterWieldablesHolderComponent::UnsetLocalPlayer() {
}

bool UIGS_CharacterWieldablesHolderComponent::SwapWieldableWithSlot(UIGS_WieldableInventoryObjectBase* inInventoryObject, EIGS_WieldableSlot inSlotType) {
    return false;
}

void UIGS_CharacterWieldablesHolderComponent::StartUsingMountedGun(AIGS_WieldableBase* inMountedGun, UIGS_WieldableInventoryObjectBase* inInventoryObject) {
}

void UIGS_CharacterWieldablesHolderComponent::SetForceHideWeapon(bool bInHide) {
}

void UIGS_CharacterWieldablesHolderComponent::SelectSlot(EIGS_WieldableSlot inSlotType) {
}

void UIGS_CharacterWieldablesHolderComponent::SelectPreviousSlot() {
}

void UIGS_CharacterWieldablesHolderComponent::SelectNextSlot() {
}

void UIGS_CharacterWieldablesHolderComponent::SelectLastSlot() {
}

void UIGS_CharacterWieldablesHolderComponent::SelectBestSlot() {
}

void UIGS_CharacterWieldablesHolderComponent::SelectAnySecondary(bool inFast) {
}

void UIGS_CharacterWieldablesHolderComponent::SelectAnyMelee(bool inFast) {
}

void UIGS_CharacterWieldablesHolderComponent::RemoveWieldableFromSlot(EIGS_WieldableSlot inSlotType) {
}

void UIGS_CharacterWieldablesHolderComponent::Multi_SetForceHideWeapon_Implementation(const bool inHide) {
}

bool UIGS_CharacterWieldablesHolderComponent::IsUnarmed() const {
    return false;
}

void UIGS_CharacterWieldablesHolderComponent::InitializeLocalPlayer(AIGS_PlayerFPVArmsFramework* inOwnerArmsActor) {
}

bool UIGS_CharacterWieldablesHolderComponent::HasFreeSlot() {
    return false;
}

bool UIGS_CharacterWieldablesHolderComponent::HasAnySecondary() {
    return false;
}

bool UIGS_CharacterWieldablesHolderComponent::HasAnyMelee() {
    return false;
}

FIGS_WieldableSlot UIGS_CharacterWieldablesHolderComponent::GetWieldableForSlot(EIGS_WieldableSlot inSlotType) {
    return FIGS_WieldableSlot{};
}

EIGS_WieldableSlot UIGS_CharacterWieldablesHolderComponent::GetSlotForWieldableClass(const TSoftClassPtr<AIGS_WieldableBase>& inWieldableClass) const {
    return EIGS_WieldableSlot::S_MIN;
}

EIGS_WieldableSlot UIGS_CharacterWieldablesHolderComponent::GetSlotForItem(UIGS_WieldableInventoryObjectBase* inItem) const {
    return EIGS_WieldableSlot::S_MIN;
}

EIGS_WieldableSlot UIGS_CharacterWieldablesHolderComponent::GetLastSlot() const {
    return EIGS_WieldableSlot::S_MIN;
}

EIGS_WieldableSlot UIGS_CharacterWieldablesHolderComponent::GetInitialSlot() const {
    return EIGS_WieldableSlot::S_MIN;
}

bool UIGS_CharacterWieldablesHolderComponent::GetForceHideWeapon() const {
    return false;
}

AIGS_WieldableBase* UIGS_CharacterWieldablesHolderComponent::GetCurrentWieldableActor() const {
    return NULL;
}

EIGS_WieldableSlot UIGS_CharacterWieldablesHolderComponent::GetBestSlot() {
    return EIGS_WieldableSlot::S_MIN;
}

EIGS_WieldableSlot UIGS_CharacterWieldablesHolderComponent::GetActiveSlot() const {
    return EIGS_WieldableSlot::S_MIN;
}

void UIGS_CharacterWieldablesHolderComponent::FastUnholster() {
}

void UIGS_CharacterWieldablesHolderComponent::FastSelectSlot(EIGS_WieldableSlot inNewSlot) {
}

void UIGS_CharacterWieldablesHolderComponent::FastHolster(bool inNotifySlotChanged) {
}

bool UIGS_CharacterWieldablesHolderComponent::CanWield(TSubclassOf<UIGS_WieldableInventoryObjectBase> inClass) {
    return false;
}

bool UIGS_CharacterWieldablesHolderComponent::AddWieldableToSlot(UIGS_WieldableInventoryObjectBase* inInventoryObject, EIGS_WieldableSlot inSlotType) {
    return false;
}

EIGS_WieldableSlot UIGS_CharacterWieldablesHolderComponent::AddWieldable(UIGS_WieldableInventoryObjectBase* inInventoryObject) {
    return EIGS_WieldableSlot::S_MIN;
}

bool UIGS_CharacterWieldablesHolderComponent::AddOrSwapWieldable(UIGS_WieldableInventoryObjectBase* inInventoryObject, bool inSelect) {
    return false;
}


