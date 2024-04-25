#include "META_UtilitiesLibrary.h"

UMETA_UtilitiesLibrary::UMETA_UtilitiesLibrary() {
}

int32 UMETA_UtilitiesLibrary::RoundNextDigitsOfNumberToZero(int32 inNumber, int32 inAmountOfFirstDigits) {
    return 0;
}

int32 UMETA_UtilitiesLibrary::RandomIntegerInRange(const FMETA_Interval InRange) {
    return 0;
}

int64 UMETA_UtilitiesLibrary::RandomInteger64InRange(const FMETA_Int64Interval InRange) {
    return 0;
}

float UMETA_UtilitiesLibrary::RandomFloatInRange(const FMETA_FloatInterval InRange) {
    return 0.0f;
}

bool UMETA_UtilitiesLibrary::IsUniqueCharacter(EIGS_CharacterID ID) {
    return false;
}

bool UMETA_UtilitiesLibrary::IsQualityInBitmask(EMETA_ItemQuality inItemQuantity, int32 inBitmask) {
    return false;
}

bool UMETA_UtilitiesLibrary::IsGenericCharacter(EIGS_CharacterID ID) {
    return false;
}

bool UMETA_UtilitiesLibrary::IsBoss(EIGS_CharacterID ID) {
    return false;
}

FGameplayTag UMETA_UtilitiesLibrary::GetRandomizedLootItemAvailableOnMeta() {
    return FGameplayTag{};
}

TArray<EMETA_ItemQuality> UMETA_UtilitiesLibrary::GetQualitiesFromBitmask(int32 inBitmask) {
    return TArray<EMETA_ItemQuality>();
}

bool UMETA_UtilitiesLibrary::GetLootLevel(FGameplayTag inLootTag, int32& Level, FGameplayTag& outMainLootTag) {
    return false;
}

TArray<FGameplayTag> UMETA_UtilitiesLibrary::GetAllLootItemsAvailableOnMeta() {
    return TArray<FGameplayTag>();
}

TArray<FGameplayTag> UMETA_UtilitiesLibrary::GetAllChildTagsIncludingNested(FGameplayTag ParentTag) {
    return TArray<FGameplayTag>();
}

TArray<FGameplayTag> UMETA_UtilitiesLibrary::GetAllChildTag(FGameplayTag ParentTag) {
    return TArray<FGameplayTag>();
}

TArray<EMETA_IntelUnlockLevel> UMETA_UtilitiesLibrary::GetAllAvailableIntelUnlockLevelByUpperLevel(EMETA_IntelUnlockLevel inUpperLevel) {
    return TArray<EMETA_IntelUnlockLevel>();
}

EMETA_Gang UMETA_UtilitiesLibrary::ConvertVendorToGang(EMETA_TradeVendor inVendor) {
    return EMETA_Gang::None;
}

EMETA_TradeVendor UMETA_UtilitiesLibrary::ConvertGangToVendor(EMETA_Gang inGang) {
    return EMETA_TradeVendor::UNDEFINED;
}

EIGS_WeaponSubtype UMETA_UtilitiesLibrary::ConvertClassTagToWeaponSubtype(FGameplayTag inClassTag) {
    return EIGS_WeaponSubtype::None;
}

EIGS_InventorySlot UMETA_UtilitiesLibrary::ConvertClassTagToEnumSlot(FGameplayTag inClassTag) {
    return EIGS_InventorySlot::INVALID;
}

bool UMETA_UtilitiesLibrary::CompareInt(int32 InValue, int32 inCompareWith, EMETA_ConditionOperator inOperator) {
    return false;
}

bool UMETA_UtilitiesLibrary::CompareFloat(float InValue, float inCompareWith, EMETA_ConditionOperator inOperator) {
    return false;
}

int32 UMETA_UtilitiesLibrary::ClampIntegerWithinRange(const int32 InValue, const FMETA_Interval InRange) {
    return 0;
}

int64 UMETA_UtilitiesLibrary::ClampInteger64WithinRange(const int64 InValue, const FMETA_Int64Interval InRange) {
    return 0;
}

float UMETA_UtilitiesLibrary::ClampFloatWithinRange(const float InValue, const FMETA_FloatInterval InRange) {
    return 0.0f;
}

TArray<FGameplayTag> UMETA_UtilitiesLibrary::CalculateParentLootTagsForArray(TArray<FGameplayTag> inGameplayTagArray) {
    return TArray<FGameplayTag>();
}

int32 UMETA_UtilitiesLibrary::CalculateIndexForArrayOfChances(TArray<int32> inChances) {
    return 0;
}

bool UMETA_UtilitiesLibrary::AreGraphCharactersIDsEqual(const FMETA_CharacterID& First, const FMETA_CharacterID& Second) {
    return false;
}

bool UMETA_UtilitiesLibrary::AreConditionsForArmyTierChangingEqual(const FMETA_ConditionForArmyTierChanging& inFirst, const FMETA_ConditionForArmyTierChanging& inSecond) {
    return false;
}


