#include "META_BaseObject.h"

UMETA_BaseObject::UMETA_BaseObject() {
    this->ItemCost = 0;
}

void UMETA_BaseObject::SetTagID(FGameplayTag inTag) {
}

void UMETA_BaseObject::SetItemPrice(int32 inItemCost) {
}

void UMETA_BaseObject::SetIcon(TSoftObjectPtr<UTexture2D> inIcon) {
}

void UMETA_BaseObject::SetEntitlementTagID(FGameplayTag inTag) {
}

FGameplayTag UMETA_BaseObject::GetTagID() const {
    return FGameplayTag{};
}

EMETA_ItemQuality UMETA_BaseObject::GetItemQuality() const {
    return EMETA_ItemQuality::None;
}

int32 UMETA_BaseObject::GetItemPrice() const {
    return 0;
}

FText UMETA_BaseObject::GetItemName() const {
    return FText::GetEmpty();
}

FText UMETA_BaseObject::GetItemDescription() const {
    return FText::GetEmpty();
}

TSoftObjectPtr<UTexture2D> UMETA_BaseObject::GetIcon() {
    return NULL;
}

FGameplayTag UMETA_BaseObject::GetEntitlementTagID() const {
    return FGameplayTag{};
}


