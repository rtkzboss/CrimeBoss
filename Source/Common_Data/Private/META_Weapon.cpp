#include "META_Weapon.h"
#include "Templates/SubclassOf.h"

UMETA_Weapon::UMETA_Weapon() {
    this->IsUnseenInShop = false;
    this->m_Price = 0;
    this->m_AdditionalPercentageOfWeaponPrice = 0;
    this->m_AdditionalPercentageOfWeaponPriceFromMods = 0;
    this->m_Character = NULL;
    this->m_SuccessfulMissions = 0;
    this->m_TargetQualityToUpdateWeapon = EMETA_ItemQuality::None;
    this->m_DaysInShop = 0;
}

void UMETA_Weapon::SetWeaponSkin(FGameplayTag inSkinTag) {
}

void UMETA_Weapon::SetPrice(int32 inNewPrice) {
}

bool UMETA_Weapon::SetInfoByTag(UObject* inWCO, FGameplayTag inTag) {
    return false;
}

bool UMETA_Weapon::SetInfo(UObject* inWCO, const TSubclassOf<UMETA_WeaponInventoryObject>& inWeaponId) {
    return false;
}

void UMETA_Weapon::SetDaysInShop(int32 DaysInShop) {
}

void UMETA_Weapon::SetCharacter(UMETA_Character* Character) {
}

void UMETA_Weapon::SetAdditionalPercentageOfWeaponPriceFromMods(int32 inAdditionalPercentageOfPrice) {
}

void UMETA_Weapon::SetAdditionalPercentageOfWeaponPrice(int32 inAdditionalPercentageOfPrice) {
}

void UMETA_Weapon::IsSignatureWeapon(bool& outSignature, EIGS_CharacterID& outSignatureCharacter) const {
}

bool UMETA_Weapon::IsMeleeWeapon() const {
    return false;
}

void UMETA_Weapon::IncreaseDaysInShopByOne() {
}

FIGS_WeaponTableRow UMETA_Weapon::GetWeaponTableRow() const {
    return FIGS_WeaponTableRow{};
}

EIGS_WeaponSubtype UMETA_Weapon::GetWeaponSubtype() const {
    return EIGS_WeaponSubtype::None;
}

TSoftObjectPtr<UIGS_WeaponSkinData> UMETA_Weapon::GetWeaponSkinAsset(UObject* inWCO) const {
    return NULL;
}

FGameplayTag UMETA_Weapon::GetWeaponSkin() const {
    return FGameplayTag{};
}

float UMETA_Weapon::GetUpgradeCostMultiplier() const {
    return 0.0f;
}

int32 UMETA_Weapon::GetUpgradeCost() const {
    return 0;
}

FText UMETA_Weapon::GetTitle() const {
    return FText::GetEmpty();
}

TArray<TSubclassOf<UMETA_WeaponInventoryObject>> UMETA_Weapon::GetTargetWeaponsForUpgrade() const {
    return TArray<TSubclassOf<UMETA_WeaponInventoryObject>>();
}

EMETA_ItemQuality UMETA_Weapon::GetTargetQualityToUpdateWeapon() const {
    return EMETA_ItemQuality::None;
}

int32 UMETA_Weapon::GetSuccessfulMissions() const {
    return 0;
}

int32 UMETA_Weapon::GetSalePrice() const {
    return 0;
}

EMETA_ItemQuality UMETA_Weapon::GetQuality() const {
    return EMETA_ItemQuality::None;
}

int32 UMETA_Weapon::GetPrice() const {
    return 0;
}

FIGS_MeleeWeaponTableRow UMETA_Weapon::GetMeleeWeaponTableRow() const {
    return FIGS_MeleeWeaponTableRow{};
}

EIGS_InventorySlot UMETA_Weapon::GetInventorySlot() const {
    return EIGS_InventorySlot::INVALID;
}

TSoftObjectPtr<UTexture2D> UMETA_Weapon::GetImage() const {
    return NULL;
}

TSubclassOf<UMETA_WeaponInventoryObject> UMETA_Weapon::GetId() const {
    return NULL;
}

FText UMETA_Weapon::GetDescription() const {
    return FText::GetEmpty();
}

int32 UMETA_Weapon::GetDaysInShop() const {
    return 0;
}

UMETA_Character* UMETA_Weapon::GetCharacter() const {
    return NULL;
}

int32 UMETA_Weapon::GetBasePrice() const {
    return 0;
}

int32 UMETA_Weapon::GetAdditionalPercentageOfWeaponPriceFromMods() {
    return 0;
}

int32 UMETA_Weapon::GetAdditionalPercentageOfWeaponPrice() const {
    return 0;
}

void UMETA_Weapon::FillTargetWeaponsForUpgrade(UObject* inWCO, bool bForce) {
}

void UMETA_Weapon::ChangeSuccessfulMissions(int32 inChangedBy) {
}

void UMETA_Weapon::AddTargetWeaponForUpgrade(TSubclassOf<UMETA_WeaponInventoryObject> inNewTargerWeapon) {
}


