#pragma once
#include "CoreMinimal.h"
#include "EIGS_SessionPropertyKey.h"
#include "EIGS_AlarmReason.h"
#include "IGS_AILoadoutHolder.h"
#include "IGS_BadFlyGameplayStatics.h"
#include "CommonHeisterData.h"
#include "ECommonMissionResult.h"
#include "IGS_WeaponSkinTableRow.h"
#include "IGS_Quick_ChainPlayerCharacters.h"
#include "IGS_UnlockedCharacterSaveData.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/OnlineReplStructs.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "FindSessionsCallbackProxy.h"
#include "EIGS_CharacterID.h"
#include "EIGS_DialogueGroup.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_WieldableSlot.h"
#include "EIGS_ChanceEnum.h"
#include "Templates/SubclassOf.h"
#include "IGS_PaybackGameplayStatics.generated.h"

class AController;
class AIGS_GameCharacterFramework;
class AIGS_GameStateGame;
class AIGS_IntelligentGameCharacter;
class AIGS_PlayerCharacter;
class APaybackGameModeBase;
class APlayerState;
class UIGS_AlarmLocalizationTable;
class UIGS_EquipmentInventoryObject;
class UIGS_GameplayEffect_Class;
class UIGS_InventoryObjectFramework;
class UIGS_MeleeWeaponInventoryObject;
class UIGS_ModInventoryObject;
class UIGS_RandomStreamHolder;
class UIGS_WeaponInventoryObject;
class UIGS_WeaponSkinData;
class UMETA_WeaponInventoryObject;
class UObject;
class UPaybackGameViewportClient;

UCLASS(Blueprintable)
class PAYBACK_API UIGS_PaybackGameplayStatics : public UIGS_BadFlyGameplayStatics {
    GENERATED_BODY()
public:
    UIGS_PaybackGameplayStatics();

    UFUNCTION(BlueprintCallable)
    static void UpdateSubObjectiveWithDialogue(UObject* inWCO, FText inNewObjective, EIGS_DialogueGroup inDialogueGroup, AIGS_GameCharacterFramework* inInstigator, FName inDialogueID);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateSubObjective(UObject* inWCO, FText inNewObjective);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateMainObjective(UObject* inWCO, FText inNewObjective);
    
    UFUNCTION(BlueprintCallable)
    static void UnlockCharacterAccountWide(UObject* inWCO, EIGS_CharacterID inID, bool inMaxLevel);
    
    UFUNCTION(BlueprintCallable)
    static void TeleportCharactersRelativeTo(const UObject* inWCO, const FTransform& inOrigin, const FTransform& inDestination, const TArray<AIGS_GameCharacterFramework*>& inCharacters);
    
    UFUNCTION(BlueprintCallable)
    static void StartEndMission(UObject* inWCO, ECommonMissionResult inMissionResult);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FBlueprintSessionResult> SortSessionsByParameter(TArray<FBlueprintSessionResult> inSessions, bool inAscending, EIGS_SessionPropertyKey inKey);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayerImmortality(UObject* inWCO, bool inImmortal);
    
    UFUNCTION(BlueprintCallable)
    static void SetControllerRotation(AController* inNewPlayer, const FRotator& inStartRotation);
    
    UFUNCTION(BlueprintCallable)
    static bool SetAccountVariableValue(UObject* inWCO, FGameplayTag inVariable, int32 InValue, bool inIsDebugSave);
    
    UFUNCTION(BlueprintCallable)
    static void ResetUnlockedCharactersAndContracts(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveWeaponFromPlayer(AIGS_PlayerCharacter* inPlayerCharacter, EIGS_WieldableSlot inSlotToRemove);
    
    UFUNCTION(BlueprintCallable)
    static void RandomChanceFromStream(int32 inChance, UPARAM(Ref) UIGS_RandomStreamHolder*& inRandomStream, EIGS_ChanceEnum& outBranches);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void OwnsCommonHeisterData(const APlayerState* inPlayerState, const FCommonHeisterData inCommonHeisterData, bool& OwnsHeisterData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void OwnsChainPlayerCharacters(const APlayerState* inPlayerState, const FIGS_Quick_ChainPlayerCharacters inChainPlayerCharacters, bool& OwnsPlayerCharacters);
    
    UFUNCTION(BlueprintCallable)
    static void OverridePlayerInventory(AIGS_PlayerCharacter* inPlayerCharacter, TSubclassOf<UMETA_WeaponInventoryObject> inPrimaryWeapon, TSubclassOf<UMETA_WeaponInventoryObject> inSecondaryWeapon, TSubclassOf<UIGS_EquipmentInventoryObject> inEquipment, bool inRemoveIfNone, EIGS_WieldableSlot inSlotToSelect);
    
    UFUNCTION(BlueprintCallable)
    static void OverloadAllRobotsOfSide(UObject* inWCO, const EIGS_TeamSideEnum inTeamSide, UPARAM(Ref) AController*& inInstigator, const FVector inOrigin, const float inMaxDelay, const float inMaxDistance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAccountVariableUnlocked(UObject* inWCO, FGameplayTag inVariable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FIGS_UnlockedCharacterSaveData> GetUnlockedCharactersAccountWide(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetUniqueIdFromPlayerState(APlayerState* inPlayerState, FUniqueNetIdRepl& inUnqiueNetId);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FIGS_WeaponSkinTableRow> GetSkinsCompatibleWithWeapon(UObject* inWCO, TSubclassOf<UIGS_InventoryObjectFramework> inWeapon);
    
    UFUNCTION(BlueprintCallable)
    static void GetPlayerLoadoutFromAILoadoutHolder(const UObject* inWCO, const FIGS_AILoadoutHolder& inLoadoutHolder, TSubclassOf<UMETA_WeaponInventoryObject>& outPrimary, TSubclassOf<UMETA_WeaponInventoryObject>& outSecondary, TSubclassOf<UIGS_EquipmentInventoryObject>& outEquipment, bool inIsStory);
    
    UFUNCTION(BlueprintCallable)
    static void GetPlayerLoadoutFromAICharacter(const UObject* inWCO, UPARAM(Ref) AIGS_IntelligentGameCharacter*& inCharacter, TSubclassOf<UMETA_WeaponInventoryObject>& outPrimary, TSubclassOf<UMETA_WeaponInventoryObject>& outSecondary, TSubclassOf<UIGS_EquipmentInventoryObject>& outEquipment);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPaybackGameViewportClient* GetPaybackViewport(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AIGS_GameStateGame* GetGameStateGame(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static APaybackGameModeBase* GetGameModeBase(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static TSubclassOf<UIGS_EquipmentInventoryObject> GetEquipmentFromAILoadoutHolder(const UObject* inWCO, const FIGS_AILoadoutHolder& inLoadoutHolder);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetCampaignBossLevel(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static float GetBaggedLootWeightFromAllHeisters(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static TArray<TSubclassOf<UIGS_InventoryObjectFramework>> GetAllLootFromPlayer(AIGS_PlayerCharacter* inPlayerCharacter);
    
    UFUNCTION(BlueprintCallable)
    static void GetAlarmLocalizedText(UIGS_AlarmLocalizationTable* inTable, EIGS_AlarmReason inReason, FText& OutText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAccountVariableValue(UObject* inWCO, FGameplayTag inVariable, bool inIsDebugSave);
    
    UFUNCTION(BlueprintCallable)
    static void FinishEndMissionNoResultScreen(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static void FinishEndMission(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static void EndMissionNoResultScreen(UObject* inWCO, ECommonMissionResult inMissionResult);
    
    UFUNCTION(BlueprintCallable)
    static void EndMission(UObject* inWCO, ECommonMissionResult inMissionResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ChainPlayerMatchesHeisterDataUniqueId(const FIGS_Quick_ChainPlayerCharacters inChainPlayerCharacters, const FCommonHeisterData inHeisterData, bool& MatchesUniqueId);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyScalableFloatModifierFromPerk(UObject* inWCO, FGameplayTag inPerkID, FGameplayAttribute inAttribute, float inRawValue, bool& outFound, float& outNewValue);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyScalableFloatModifierFromCharacterClass(UObject* inWCO, TSubclassOf<UIGS_GameplayEffect_Class> inCharacterClass, FGameplayAttribute inAttribute, int32 inCharacterLevel, float inRawValue, bool& outFound, float& outNewValue);
    
    UFUNCTION(BlueprintCallable)
    static void AddWeaponToPlayer(AIGS_PlayerCharacter* inPlayerCharacter, TSubclassOf<UIGS_WeaponInventoryObject> inWeapon, TArray<TSubclassOf<UIGS_ModInventoryObject>> inWeaponMods, UIGS_WeaponSkinData* inWeaponDefaultSkin, UIGS_WeaponSkinData* inWeaponSpecificSkin, bool inSelect, TSubclassOf<UMETA_WeaponInventoryObject> inOptionalDefinitionObject, bool inThrowAwayOldWeapon);
    
    UFUNCTION(BlueprintCallable)
    static void AddWeaponDefinitionToPlayer(AIGS_PlayerCharacter* inPlayerCharacter, TSubclassOf<UMETA_WeaponInventoryObject> inWeapon, bool inSelect, bool inThrowAwayOldWeapon);
    
    UFUNCTION(BlueprintCallable)
    static void AddMeleeWeaponToPlayer(AIGS_PlayerCharacter* inPlayerCharacter, TSubclassOf<UIGS_MeleeWeaponInventoryObject> inWeapon, bool inSelect, TSubclassOf<UMETA_WeaponInventoryObject> inOptionalDefinitionObject, bool inThrowAwayOldWeapon);
    
};

