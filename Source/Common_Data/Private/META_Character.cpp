#include "META_Character.h"

UMETA_Character::UMETA_Character() {
}

void UMETA_Character::UpdateDataByNewDay() {
}

void UMETA_Character::SetWeaponToItsSlot(UMETA_Weapon* inWeapon, UMETA_Weapon*& outPreviousWeapon) {
}

void UMETA_Character::SetWeaponsCostCoefficient(float inNewValue) {
}

void UMETA_Character::SetVariable(FGameplayTag inAttribute, int32 InValue) {
}

void UMETA_Character::SetUnlockedForQP(bool inUnlocked) {
}

void UMETA_Character::SetState(EMETA_CharacterState inState) {
}

void UMETA_Character::SetPerks(TArray<FMETA_PerkData> inPerks) {
}

void UMETA_Character::SetMood(EMETA_CharacterMood inMood) {
}

void UMETA_Character::SetMaxLeveled(bool inMaxLeveled) {
}

void UMETA_Character::SetLostReviveCount(int32 inInjuries) {
}

void UMETA_Character::SetLoadoutAsChainLoadout() {
}

void UMETA_Character::SetIsUnseenInShop(bool InValue) {
}

void UMETA_Character::SetIsTemporary(bool inNewState) {
}

void UMETA_Character::SetInfo(const FMETA_CharacterInfo& inCharacterInfo, bool bLoadData) {
}

void UMETA_Character::SetCharacterMissionPlayedCountReadyForPromote() {
}

void UMETA_Character::SetChainLoadout(FIGS_ChainLoadout inChainLoadout) {
}

void UMETA_Character::SetBaseUpkeepCost(int32 inNewValue) {
}

void UMETA_Character::SetBaseMissionCutPercent(int32 inNewValue) {
}

void UMETA_Character::SetBaseHireCost(int32 inNewValue) {
}

void UMETA_Character::SetAmountOfJobsWhichCanBeCompletedToday(int32 inNewValue) {
}

void UMETA_Character::SetAbility1Charges(int32 inCharges) {
}

bool UMETA_Character::SelectEquipment(UMETA_Equipment* inCurrentEquipment) {
    return false;
}

void UMETA_Character::RemoveVariable(FGameplayTag inAttribute) {
}

bool UMETA_Character::RemoveTrait(FGameplayTag inTrait) {
    return false;
}

bool UMETA_Character::IsThereWeaponInSlot(EIGS_InventorySlot inSlot) const {
    return false;
}

bool UMETA_Character::IsTemporary() const {
    return false;
}

bool UMETA_Character::IsMaxLeveled() const {
    return false;
}

void UMETA_Character::IncrementTimesHealed() {
}

bool UMETA_Character::IncreaseLevel() {
    return false;
}

UMETA_Weapon* UMETA_Character::GetWeaponInSlot(EIGS_InventorySlot inSlot) const {
    return NULL;
}

TMap<FGameplayTag, int32> UMETA_Character::GetVariables() const {
    return TMap<FGameplayTag, int32>();
}

int32 UMETA_Character::GetUpkeepCostWithModifiers() {
    return 0;
}

bool UMETA_Character::GetUnlockedForQP() const {
    return false;
}

FGameplayTagContainer UMETA_Character::GetTraits() const {
    return FGameplayTagContainer{};
}

int32 UMETA_Character::GetTimesHealed() {
    return 0;
}

FText UMETA_Character::GetSurname() const {
    return FText::GetEmpty();
}

EMETA_CharacterState UMETA_Character::GetState() const {
    return EMETA_CharacterState::None;
}

int32 UMETA_Character::GetReviveCount() const {
    return 0;
}

EMETA_ItemQuality UMETA_Character::GetQualityTier() const {
    return EMETA_ItemQuality::None;
}

TArray<FMETA_PerkData> UMETA_Character::GetPerks() const {
    return TArray<FMETA_PerkData>();
}

int32 UMETA_Character::GetMutableIndex() {
    return 0;
}

EMETA_CharacterMood UMETA_Character::GetMood() const {
    return EMETA_CharacterMood::Unhappy;
}

int32 UMETA_Character::GetMissionWasPlayed() const {
    return 0;
}

int32 UMETA_Character::GetMissionCutPercentWithModifiers() {
    return 0;
}

int32 UMETA_Character::GetMaxLevel(UObject* inWCO) const {
    return 0;
}

int32 UMETA_Character::GetLostReviveCount() const {
    return 0;
}

FMETA_HeisterLoadout UMETA_Character::GetLoadoutReference() {
    return FMETA_HeisterLoadout{};
}

FMETA_HeisterLoadout UMETA_Character::GetLoadout() const {
    return FMETA_HeisterLoadout{};
}

int32 UMETA_Character::GetLevel() const {
    return 0;
}

bool UMETA_Character::GetIsUnseenInShop() const {
    return false;
}

FMETA_CharacterInfo UMETA_Character::GetInfo() const {
    return FMETA_CharacterInfo{};
}

FMETA_CharacterID UMETA_Character::GetId() const {
    return FMETA_CharacterID{};
}

int32 UMETA_Character::GetHireCost() {
    return 0;
}

int32 UMETA_Character::GetGenericVariantID() {
    return 0;
}

FText UMETA_Character::GetFullName() const {
    return FText::GetEmpty();
}

FText UMETA_Character::GetFirstName() const {
    return FText::GetEmpty();
}

int32 UMETA_Character::GetCurrentAmountOfJobsWhichCanBeCompletedToday() const {
    return 0;
}

FCommonHeisterData UMETA_Character::GetCommonHeisterData(const UObject* inWCO) {
    return FCommonHeisterData{};
}

float UMETA_Character::GetCharacterPromoteProgress() {
    return 0.0f;
}

float UMETA_Character::GetCharacterPreviousPromoteProgress() {
    return 0.0f;
}

int32 UMETA_Character::GetBaseUpkeepCost() const {
    return 0;
}

int32 UMETA_Character::GetBaseMissionCutPercent() {
    return 0;
}

float UMETA_Character::GetBaseLevelUpMultiplier() const {
    return 0.0f;
}

int32 UMETA_Character::GetBaseHireCost() const {
    return 0;
}

FGameplayTagQuery UMETA_Character::GetAllowedWiedables() const {
    return FGameplayTagQuery{};
}

int32 UMETA_Character::GetAditionalReviveCount() const {
    return 0;
}

float UMETA_Character::GetActiveHeisterAttributeMultiplier(EMETA_ChangedHeisterAttribute inAttribute) {
    return 0.0f;
}

int32 UMETA_Character::GetAbility1Charges() {
    return 0;
}

void UMETA_Character::DecreaseCurrentAmountOfJobsWhichCanBeCompletedToday(int32 inDecreasingValue, int32& outCurrentValue) {
}

UMETA_Equipment* UMETA_Character::ClearEquipment() {
    return NULL;
}

void UMETA_Character::ClearAndReturnWeaponFromSlot(EIGS_InventorySlot inSlot, UMETA_Weapon*& outWeapon, UMETA_Equipment*& outEquipment) {
}

FMETA_HeisterLoadout UMETA_Character::ClearAndReturnLoadout() {
    return FMETA_HeisterLoadout{};
}

void UMETA_Character::ChangeMissionWasPlayedByValue(int32 InValue) {
}

void UMETA_Character::ChangeHeisterAttributeWithinDays(FMETA_ChangedHeisterAttributeInfo inNewInfo) {
}

bool UMETA_Character::CanCharacterBePromoted() {
    return false;
}

bool UMETA_Character::AddTrait(FGameplayTag inTrait) {
    return false;
}

void UMETA_Character::AddPerk(const FMETA_PerkData inPerk) {
}


