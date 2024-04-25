#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "META_PerkData.h"
#include "META_CharacterHelpers.generated.h"

class UIGS_EconomyData_Base;
class UMETA_Character;
class UObject;

UCLASS(Blueprintable)
class COMMON_DATA_API UMETA_CharacterHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMETA_CharacterHelpers();

    UFUNCTION(BlueprintCallable)
    static TArray<FMETA_PerkData> RecalculateRandomPerksAtLevel(UObject* inWCO, FGameplayTag inCharacterTag, int32 inCharacterLevel, const TArray<FMETA_PerkData>& inCurrentPerks, int32 inPerkLimit);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FMETA_PerkData> RecalculateBossRandomPerks(UObject* inWCO, FGameplayTag inCharacterTag, const TArray<FMETA_PerkData>& inCurrentPerks, int32 inPerkLimit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMETA_PerkData GetClassPerkForCharacter(UObject* inWCO, FGameplayTag inCharacterTag);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FMETA_PerkData> GetCharacterPerksAtLevel(UObject* inWCO, FGameplayTag inCharacterTag, int32 inCharacterLevel);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FMETA_PerkData> GetAvailableNewPerks(UObject* inWCO, FGameplayTag inCharacterTag, const TArray<FMETA_PerkData>& inCurrentPerks);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FMETA_PerkData> GenerateGenericCharacterPerksAtLevel(UObject* inWCO, FGameplayTag inCharacterTag, int32 inCharacterLevel, const TArray<FMETA_PerkData>& inCurrentPerks, int32 inPerkLimit);
    
    UFUNCTION(BlueprintCallable)
    static UMETA_Character* CreateCharacter(UObject* inWCO, UObject* inOuter, UIGS_EconomyData_Base* inEconomyData, const FGameplayTag inCharacterTag);
    
};

