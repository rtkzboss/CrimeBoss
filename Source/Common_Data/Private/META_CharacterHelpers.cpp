#include "META_CharacterHelpers.h"

UMETA_CharacterHelpers::UMETA_CharacterHelpers() {
}

TArray<FMETA_PerkData> UMETA_CharacterHelpers::RecalculateRandomPerksAtLevel(UObject* inWCO, FGameplayTag inCharacterTag, int32 inCharacterLevel, const TArray<FMETA_PerkData>& inCurrentPerks, int32 inPerkLimit) {
    return TArray<FMETA_PerkData>();
}

TArray<FMETA_PerkData> UMETA_CharacterHelpers::RecalculateBossRandomPerks(UObject* inWCO, FGameplayTag inCharacterTag, const TArray<FMETA_PerkData>& inCurrentPerks, int32 inPerkLimit) {
    return TArray<FMETA_PerkData>();
}

FMETA_PerkData UMETA_CharacterHelpers::GetClassPerkForCharacter(UObject* inWCO, FGameplayTag inCharacterTag) {
    return FMETA_PerkData{};
}

TArray<FMETA_PerkData> UMETA_CharacterHelpers::GetCharacterPerksAtLevel(UObject* inWCO, FGameplayTag inCharacterTag, int32 inCharacterLevel) {
    return TArray<FMETA_PerkData>();
}

TArray<FMETA_PerkData> UMETA_CharacterHelpers::GetAvailableNewPerks(UObject* inWCO, FGameplayTag inCharacterTag, const TArray<FMETA_PerkData>& inCurrentPerks) {
    return TArray<FMETA_PerkData>();
}

TArray<FMETA_PerkData> UMETA_CharacterHelpers::GenerateGenericCharacterPerksAtLevel(UObject* inWCO, FGameplayTag inCharacterTag, int32 inCharacterLevel, const TArray<FMETA_PerkData>& inCurrentPerks, int32 inPerkLimit) {
    return TArray<FMETA_PerkData>();
}

UMETA_Character* UMETA_CharacterHelpers::CreateCharacter(UObject* inWCO, UObject* inOuter, UIGS_EconomyData_Base* inEconomyData, const FGameplayTag inCharacterTag) {
    return NULL;
}


