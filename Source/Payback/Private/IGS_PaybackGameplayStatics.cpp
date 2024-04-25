#include "IGS_PaybackGameplayStatics.h"
#include "Templates/SubclassOf.h"

UIGS_PaybackGameplayStatics::UIGS_PaybackGameplayStatics() {
}

void UIGS_PaybackGameplayStatics::UpdateSubObjectiveWithDialogue(UObject* inWCO, FText inNewObjective, EIGS_DialogueGroup inDialogueGroup, AIGS_GameCharacterFramework* inInstigator, FName inDialogueID) {
}

void UIGS_PaybackGameplayStatics::UpdateSubObjective(UObject* inWCO, FText inNewObjective) {
}

void UIGS_PaybackGameplayStatics::UpdateMainObjective(UObject* inWCO, FText inNewObjective) {
}

void UIGS_PaybackGameplayStatics::UnlockCharacterAccountWide(UObject* inWCO, EIGS_CharacterID inID, bool inMaxLevel) {
}

void UIGS_PaybackGameplayStatics::TeleportCharactersRelativeTo(const UObject* inWCO, const FTransform& inOrigin, const FTransform& inDestination, const TArray<AIGS_GameCharacterFramework*>& inCharacters) {
}

void UIGS_PaybackGameplayStatics::StartEndMission(UObject* inWCO, ECommonMissionResult inMissionResult) {
}

TArray<FBlueprintSessionResult> UIGS_PaybackGameplayStatics::SortSessionsByParameter(TArray<FBlueprintSessionResult> inSessions, bool inAscending, EIGS_SessionPropertyKey inKey) {
    return TArray<FBlueprintSessionResult>();
}

void UIGS_PaybackGameplayStatics::SetPlayerImmortality(UObject* inWCO, bool inImmortal) {
}

void UIGS_PaybackGameplayStatics::SetControllerRotation(AController* inNewPlayer, const FRotator& inStartRotation) {
}

bool UIGS_PaybackGameplayStatics::SetAccountVariableValue(UObject* inWCO, FGameplayTag inVariable, int32 InValue, bool inIsDebugSave) {
    return false;
}

void UIGS_PaybackGameplayStatics::ResetUnlockedCharactersAndContracts(UObject* inWCO) {
}

void UIGS_PaybackGameplayStatics::RemoveWeaponFromPlayer(AIGS_PlayerCharacter* inPlayerCharacter, EIGS_WieldableSlot inSlotToRemove) {
}

void UIGS_PaybackGameplayStatics::RandomChanceFromStream(int32 inChance, UIGS_RandomStreamHolder*& inRandomStream, EIGS_ChanceEnum& outBranches) {
}

void UIGS_PaybackGameplayStatics::OwnsCommonHeisterData(const APlayerState* inPlayerState, const FCommonHeisterData inCommonHeisterData, bool& OwnsHeisterData) {
}

void UIGS_PaybackGameplayStatics::OwnsChainPlayerCharacters(const APlayerState* inPlayerState, const FIGS_Quick_ChainPlayerCharacters inChainPlayerCharacters, bool& OwnsPlayerCharacters) {
}

void UIGS_PaybackGameplayStatics::OverridePlayerInventory(AIGS_PlayerCharacter* inPlayerCharacter, TSubclassOf<UMETA_WeaponInventoryObject> inPrimaryWeapon, TSubclassOf<UMETA_WeaponInventoryObject> inSecondaryWeapon, TSubclassOf<UIGS_EquipmentInventoryObject> inEquipment, bool inRemoveIfNone, EIGS_WieldableSlot inSlotToSelect) {
}

void UIGS_PaybackGameplayStatics::OverloadAllRobotsOfSide(UObject* inWCO, const EIGS_TeamSideEnum inTeamSide, AController*& inInstigator, const FVector inOrigin, const float inMaxDelay, const float inMaxDistance) {
}

bool UIGS_PaybackGameplayStatics::IsAccountVariableUnlocked(UObject* inWCO, FGameplayTag inVariable) {
    return false;
}

TArray<FIGS_UnlockedCharacterSaveData> UIGS_PaybackGameplayStatics::GetUnlockedCharactersAccountWide(UObject* inWCO) {
    return TArray<FIGS_UnlockedCharacterSaveData>();
}

void UIGS_PaybackGameplayStatics::GetUniqueIdFromPlayerState(APlayerState* inPlayerState, FUniqueNetIdRepl& inUnqiueNetId) {
}

TArray<FIGS_WeaponSkinTableRow> UIGS_PaybackGameplayStatics::GetSkinsCompatibleWithWeapon(UObject* inWCO, TSubclassOf<UIGS_InventoryObjectFramework> inWeapon) {
    return TArray<FIGS_WeaponSkinTableRow>();
}

void UIGS_PaybackGameplayStatics::GetPlayerLoadoutFromAILoadoutHolder(const UObject* inWCO, const FIGS_AILoadoutHolder& inLoadoutHolder, TSubclassOf<UMETA_WeaponInventoryObject>& outPrimary, TSubclassOf<UMETA_WeaponInventoryObject>& outSecondary, TSubclassOf<UIGS_EquipmentInventoryObject>& outEquipment, bool inIsStory) {
}

void UIGS_PaybackGameplayStatics::GetPlayerLoadoutFromAICharacter(const UObject* inWCO, AIGS_IntelligentGameCharacter*& inCharacter, TSubclassOf<UMETA_WeaponInventoryObject>& outPrimary, TSubclassOf<UMETA_WeaponInventoryObject>& outSecondary, TSubclassOf<UIGS_EquipmentInventoryObject>& outEquipment) {
}

UPaybackGameViewportClient* UIGS_PaybackGameplayStatics::GetPaybackViewport(UObject* inWCO) {
    return NULL;
}

AIGS_GameStateGame* UIGS_PaybackGameplayStatics::GetGameStateGame(UObject* inWCO) {
    return NULL;
}

APaybackGameModeBase* UIGS_PaybackGameplayStatics::GetGameModeBase(UObject* inWCO) {
    return NULL;
}

TSubclassOf<UIGS_EquipmentInventoryObject> UIGS_PaybackGameplayStatics::GetEquipmentFromAILoadoutHolder(const UObject* inWCO, const FIGS_AILoadoutHolder& inLoadoutHolder) {
    return NULL;
}

int32 UIGS_PaybackGameplayStatics::GetCampaignBossLevel(UObject* inWCO) {
    return 0;
}

float UIGS_PaybackGameplayStatics::GetBaggedLootWeightFromAllHeisters(UObject* inWCO) {
    return 0.0f;
}

TArray<TSubclassOf<UIGS_InventoryObjectFramework>> UIGS_PaybackGameplayStatics::GetAllLootFromPlayer(AIGS_PlayerCharacter* inPlayerCharacter) {
    return TArray<TSubclassOf<UIGS_InventoryObjectFramework>>();
}

void UIGS_PaybackGameplayStatics::GetAlarmLocalizedText(UIGS_AlarmLocalizationTable* inTable, EIGS_AlarmReason inReason, FText& OutText) {
}

int32 UIGS_PaybackGameplayStatics::GetAccountVariableValue(UObject* inWCO, FGameplayTag inVariable, bool inIsDebugSave) {
    return 0;
}

void UIGS_PaybackGameplayStatics::FinishEndMissionNoResultScreen(UObject* inWCO) {
}

void UIGS_PaybackGameplayStatics::FinishEndMission(UObject* inWCO) {
}

void UIGS_PaybackGameplayStatics::EndMissionNoResultScreen(UObject* inWCO, ECommonMissionResult inMissionResult) {
}

void UIGS_PaybackGameplayStatics::EndMission(UObject* inWCO, ECommonMissionResult inMissionResult) {
}

void UIGS_PaybackGameplayStatics::ChainPlayerMatchesHeisterDataUniqueId(const FIGS_Quick_ChainPlayerCharacters inChainPlayerCharacters, const FCommonHeisterData inHeisterData, bool& MatchesUniqueId) {
}

void UIGS_PaybackGameplayStatics::ApplyScalableFloatModifierFromPerk(UObject* inWCO, FGameplayTag inPerkID, FGameplayAttribute inAttribute, float inRawValue, bool& outFound, float& outNewValue) {
}

void UIGS_PaybackGameplayStatics::ApplyScalableFloatModifierFromCharacterClass(UObject* inWCO, TSubclassOf<UIGS_GameplayEffect_Class> inCharacterClass, FGameplayAttribute inAttribute, int32 inCharacterLevel, float inRawValue, bool& outFound, float& outNewValue) {
}

void UIGS_PaybackGameplayStatics::AddWeaponToPlayer(AIGS_PlayerCharacter* inPlayerCharacter, TSubclassOf<UIGS_WeaponInventoryObject> inWeapon, TArray<TSubclassOf<UIGS_ModInventoryObject>> inWeaponMods, UIGS_WeaponSkinData* inWeaponDefaultSkin, UIGS_WeaponSkinData* inWeaponSpecificSkin, bool inSelect, TSubclassOf<UMETA_WeaponInventoryObject> inOptionalDefinitionObject, bool inThrowAwayOldWeapon) {
}

void UIGS_PaybackGameplayStatics::AddWeaponDefinitionToPlayer(AIGS_PlayerCharacter* inPlayerCharacter, TSubclassOf<UMETA_WeaponInventoryObject> inWeapon, bool inSelect, bool inThrowAwayOldWeapon) {
}

void UIGS_PaybackGameplayStatics::AddMeleeWeaponToPlayer(AIGS_PlayerCharacter* inPlayerCharacter, TSubclassOf<UIGS_MeleeWeaponInventoryObject> inWeapon, bool inSelect, TSubclassOf<UMETA_WeaponInventoryObject> inOptionalDefinitionObject, bool inThrowAwayOldWeapon) {
}


