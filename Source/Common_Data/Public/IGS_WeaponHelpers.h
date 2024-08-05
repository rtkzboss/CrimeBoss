#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "IGS_WeaponHelpers.generated.h"

class UObject;

UCLASS(Blueprintable)
class COMMON_DATA_API UIGS_WeaponHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_WeaponHelpers();

    UFUNCTION(BlueprintCallable)
    static FGameplayTag GetWeaponFamilyTag(const FGameplayTag& inTag);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FGameplayTag> GetAllWeaponSkinsFromFamilyTag(UObject* inWCO, const FGameplayTag& inTag);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FGameplayTag> GetAllWeaponsFromFamilyTag(UObject* inWCO, const FGameplayTag& inTag);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FGameplayTag> GetAllWeaponFamilyTagsFromWeaponTags(TArray<FGameplayTag> inWeaponTags);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FGameplayTag> GetAllWeaponFamilyTags(UObject* inWCO);
    
};

