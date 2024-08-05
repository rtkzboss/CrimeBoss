#include "IGS_WeaponHelpers.h"

UIGS_WeaponHelpers::UIGS_WeaponHelpers() {
}

FGameplayTag UIGS_WeaponHelpers::GetWeaponFamilyTag(const FGameplayTag& inTag) {
    return FGameplayTag{};
}

TArray<FGameplayTag> UIGS_WeaponHelpers::GetAllWeaponSkinsFromFamilyTag(UObject* inWCO, const FGameplayTag& inTag) {
    return TArray<FGameplayTag>();
}

TArray<FGameplayTag> UIGS_WeaponHelpers::GetAllWeaponsFromFamilyTag(UObject* inWCO, const FGameplayTag& inTag) {
    return TArray<FGameplayTag>();
}

TArray<FGameplayTag> UIGS_WeaponHelpers::GetAllWeaponFamilyTagsFromWeaponTags(TArray<FGameplayTag> inWeaponTags) {
    return TArray<FGameplayTag>();
}

TArray<FGameplayTag> UIGS_WeaponHelpers::GetAllWeaponFamilyTags(UObject* inWCO) {
    return TArray<FGameplayTag>();
}


