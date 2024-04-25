#include "META_BossCharacter.h"

UMETA_BossCharacter::UMETA_BossCharacter() {
}

void UMETA_BossCharacter::SetPerkInSlot(int32 inSlot, FGameplayTag inTagID) {
}

void UMETA_BossCharacter::SetCharacterSkinTag(FGameplayTag inSkinTag) {
}

FMETA_PerkData UMETA_BossCharacter::GetPerkInSlot(int32 inSlot) const {
    return FMETA_PerkData{};
}

FGameplayTag UMETA_BossCharacter::GetEquippedSecondaryWeaponID() const {
    return FGameplayTag{};
}

FGameplayTag UMETA_BossCharacter::GetEquippedPrimaryWeaponID() const {
    return FGameplayTag{};
}

FGameplayTag UMETA_BossCharacter::GetCharacterSkinTag() const {
    return FGameplayTag{};
}


