#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "META_PerkStatGroup.h"
#include "META_CharacterPerksHandling.generated.h"

class UMETA_Character;
class UMETA_PerkStatsData;
class UObject;

UCLASS(Blueprintable)
class COMMON_DATA_API UMETA_CharacterPerksHandling : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMETA_CharacterPerksHandling();

    UFUNCTION(BlueprintCallable)
    static bool IsAlwaysRecruitedWithEpicWeapon(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static bool HasNegotiationOption(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static bool HasIntimidationOption(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static bool HasAlwaysLoyalTrait(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static float GetPriceCoefficientOfHealingAction(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static void GetPerkStats(const UObject* inWCO, const FGameplayTag inPerkID, bool& outSuccess, TMap<FGameplayAttribute, float>& outStats);
    
    UFUNCTION(BlueprintCallable)
    static float GetPercentageOfMissionPlaningCost(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static float GetPercentageOfExtraCashAfterSellingLootFromStashAndTrades(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static float GetPercentageOfBonusExtraLootFromMission(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static float GetMultiplierForUpkeepCost(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static float GetMultiplierForRecruitmentCost(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static float GetMultiplierForChanceOfAmbush(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static float GetMultiplierCostUpgrade(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMinAmountOfPowerfulPerksAndNoNegative(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMinAmountOfNegativePerks(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetHeisterAdditionallyCanBeUsedTimesInDay(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static float GetHeatAfterMissionMultiplier(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static float GetHealsExtraChunksPerDay(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static float GetHealingMultiplier(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetFormattedPerkDescription(const UObject* inWCO, const FGameplayTag inPerkID, const bool inEnableRichText, const FString& inOverrideStyle);
    
    UFUNCTION(BlueprintCallable)
    static float GetExtraMoneyInPercentsAfterMission(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetConvertsAmountFromDeathToRestingAfterFps(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static void GetCombinedPerkStats(const UObject* inWCO, const UMETA_PerkStatsData* inPerkStatsData, const FGameplayTag inPerkID, bool& outSuccess, TMap<FMETA_PerkStatGroup, int32>& outStats);
    
    UFUNCTION(BlueprintCallable)
    static float GetChanceToStartMissionWith1LessWantedStart(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static void GetChancesForEventsAfterUsedConvertsFromDeathToResting(UMETA_Character* inCharacter, int32& outSurvivalEventChance, int32& outSelfReturnEventChance);
    
    UFUNCTION(BlueprintCallable)
    static float GetChanceIgnoreChuckOfInjureAfterFPS(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static float GetAdditionalPercentangeTWDefensesCost(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static float GetAdditionalPercentangeTWAttacksCost(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetAdditionalPercentageOfMissionCut(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static float GetAdditionalPercentageBossLevelUP(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetAdditionalAmountOfMissionToUpgrade(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static int32 GeAdditionalPercentangeWeaponCost(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static bool DoestItStartWithDisloyalTrait(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesMultiplierForRecruitmentCostInfluenceOnWeapons(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static bool CannotGetLoyalyTrait(UMETA_Character* inCharacter);
    
};

