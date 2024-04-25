#include "META_Equipment.h"
#include "Templates/SubclassOf.h"

UMETA_Equipment::UMETA_Equipment() {
    this->IsUnseenInShop = false;
    this->m_Price = 0;
    this->m_AdditionalPercentageOfEquipmentPrice = 0;
    this->m_Character = NULL;
}

void UMETA_Equipment::SetSaveData(FMETA_EquipmentSaveData inSaveData) {
}

void UMETA_Equipment::SetPrice(int32 inNewPrice) {
}

bool UMETA_Equipment::SetInfoByTag(UObject* inWCO, FGameplayTag inTag) {
    return false;
}

bool UMETA_Equipment::SetInfo(UObject* inWCO, const TSubclassOf<UIGS_EquipmentInventoryObject>& inEquipmentId) {
    return false;
}

void UMETA_Equipment::SetCharacter(UMETA_Character* Character) {
}

void UMETA_Equipment::SetAdditionalPercentageOfEquipmentPrice(int32 inAdditionalPercentageOfPrice) {
}

FMETA_EquipmentSaveData UMETA_Equipment::GetSaveData() const {
    return FMETA_EquipmentSaveData{};
}

int32 UMETA_Equipment::GetSalePrice() const {
    return 0;
}

EMETA_ItemQuality UMETA_Equipment::GetQuality() const {
    return EMETA_ItemQuality::None;
}

int32 UMETA_Equipment::GetPrice() const {
    return 0;
}

TSubclassOf<UIGS_EquipmentInventoryObject> UMETA_Equipment::GetId() const {
    return NULL;
}

UMETA_Character* UMETA_Equipment::GetCharacter() const {
    return NULL;
}


