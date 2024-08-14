#pragma once
#include "CoreMinimal.h"
#include "META_PreviousMissionData.h"
#include "IGS_FPS2Meta_Data.h"
#include "IGS_SharedMetaTransfer_Data.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "EMETA_CareerCompletionReason.h"
#include "EMETA_Gang.h"
#include "EMETA_GoalStatus.h"
#include "EMETA_Heat.h"
#include "EMETA_Partner.h"
#include "EMETA_RespectLvl.h"
#include "EMETA_TradeVendor.h"
#include "Templates/SubclassOf.h"
#include "META_UIEventsManager.generated.h"

class UMETA_BaseFPSMission;
class UMETA_BaseGoal;
class UMETA_BaseMission;
class UMETA_Character;
class UMETA_DetectiveID;
class UMETA_Equipment;
class UMETA_MissionID;
class UMETA_PlotlineAsset;
class UMETA_TaskCondition;
class UMETA_TradeDealSell;
class UMETA_Weapon;
class UMapTile;

UINTERFACE(Blueprintable, MinimalAPI)
class UMETA_UIEventsManager : public UInterface {
    GENERATED_BODY()
};

class IMETA_UIEventsManager : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void WeaponBought(UMETA_Weapon* inWeapon);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void WarehouseWasAttacked(UMETA_BaseFPSMission* inMission);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void WarehouseDefenceWasIgnored();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UnpaidHeisterLeftCrew(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UnlockFeature(FGameplayTag inFeatureTag, bool inChildTagsUnlockedToo, bool inSilent, const FText& inCutsceneID, bool inVoiceoverOnly);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UniqueHeisterLvlChanged(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UniqueHeisterIsMissing(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UniqueHeisterIsDead(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UniqueHeisterHired(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UniqueHeisterAvailableInBlackmarket(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TurfConflictsResolved();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TriggerAdditionalAction(FGameplayTag inTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TradeEventStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TradeEventReady();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TradeEventFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TilesUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TerritoryLostTo(UMapTile* inTileObject, EMETA_Gang inNewOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TerritoryIsOurs(UMapTile* inTileObject);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TerritoryDefended(UMapTile* inTileObject, EMETA_Gang inGang);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SwitchToScreen(FGameplayTag inTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SurvivalMissionForMissingCrewSpawned(UMETA_BaseMission* inMission, UMETA_Character* inMissingHeister);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StashItemsUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RivalEliminated(EMETA_Gang inRival);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RequestSwitchToScreen(FGameplayTag inTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReadyRandEventChanged(EMETA_Partner inPartner, FGameplayTag inEventID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PoliceInvestigationProgressValueChanged(float inCurrentPoliceInvestigationValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayersArmyAmountUpdated(int32 inAllSoldiersAmount, int32 inAvailableSoldiersAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayerRehabilitatedFromBankruptState();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayerReachedBankruptState();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayerHeatStateChanged(EMETA_Heat inNewHeatState, EMETA_Heat PreviousHeatState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayerBrokeFriendshipAndBecameTopEnemyForAllGangs(UMapTile* inAttackedTile, EMETA_Gang inExFriendGang, int32 inDurationInTopEnemiesAttitudeList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PawnShopLootValueLimitWasExceeded();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OurTerritoryIsUnderAttack(UMapTile* inTileObject, EMETA_Gang inGang);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MoneyMakingOpportunitiesStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MoneyMakingOpportunitiesFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MoneyMakingOpportunitiesFinalDay(int32 inAmountOfRemainingMissions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MissionSelected(UMETA_BaseMission* inMission);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MissionObjectiveForCompletionInNDaysFailed(UMETA_BaseFPSMission* inMission);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MissingHeisterReturnedToCrew(UMETA_Character* inReturnedHeister);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MissingHeisterDead(UMETA_Character* inDeadHeister);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MarketItemsUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MapTileSelected(UMapTile* inTileObject, bool SelectedByUser);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LootChanged(FGameplayTag LootTag, int32 CurrentValue, int32 ChangeByValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LoanIsAbleToBeActivatedDueToBankruption();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LoanHasBeenFullyRepaid();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void JobsUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void JobRemoved(UMETA_BaseMission* inMission);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void JobIsForced(UMETA_BaseMission* inMetaMissionID, bool inCrewIsPredefined);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void JobCompleted(UMETA_BaseMission* inMetaMissionID, FIGS_FPS2Meta_Data InMetaData, FIGS_SharedMetaTransfer_Data inSharedData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void JobAdded(UMETA_BaseMission* inMission);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HeisterIsMissing(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HeisterIsDead(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HeisterHired(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HeisterDeserted(UMETA_Character* inCharacter, int32 inStolenMoney);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HeatRecapResultComputed(EMETA_Gang inNewSheriffTargetGang, EMETA_Heat inPlayerHeatState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GoBack(FGameplayTag inTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GoalTaskUpdated(UMETA_BaseGoal* inGoal, UMETA_TaskCondition* inTask);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GoalTaskAddedOrRemoved(UMETA_BaseGoal* inGoal, bool bAdded, UMETA_TaskCondition* Task);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GoalStatusChanged(UMETA_BaseGoal* inGoal, EMETA_GoalStatus Status);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GoalSelectionAvailable(UMETA_BaseGoal* inGoal);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GangHaveIsolatedTilesAndAutomaticallyCapturedThem(EMETA_Gang inAttacker, const TArray<FGameplayTag>& inIsolatedAndCapturedTiles);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FinanceInfoUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Expenditure(int32 inCash);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EquipmentBought(UMETA_Equipment* inEquipment);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisplayAmbush(TSubclassOf<UMETA_MissionID> inAmbushMissionID, FMETA_PreviousMissionData inPreviousMissionData, bool& bWasDisplayed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DetectiveNeutralizedOurTerritory(TSubclassOf<UMETA_DetectiveID> inDetectiveID, UMapTile* inTile);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DetectiveNeutralizedEnemyTerritory(TSubclassOf<UMETA_DetectiveID> inDetectiveID, EMETA_Gang inGang, UMapTile* inTile);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DetectiveKilled(TSubclassOf<UMETA_DetectiveID> inKilledDetective);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DetectiveArrestedPLayersSoldiers(TSubclassOf<UMETA_DetectiveID> inDetective, int32 inArrestedAmountOfSoldiers, FGameplayTag inNeutralizedTile);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DetectiveAppeared(TSubclassOf<UMETA_DetectiveID> inDetectiveID, UMapTile* inTile);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Debug_ForceJobExecutionOverride();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DayStarted(int32 inDay);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DayEnded();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CrewUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Confirm(FGameplayTag inTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CharacterCanBePromoted(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CashReceived(int32 inCash);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CareerCompleted(EMETA_CareerCompletionReason inCompletionReason, EMETA_Gang inOptionalGang);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BossRespectChanged(EMETA_RespectLvl inNewRespectLvl);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BMLootEventStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BMLootEventFinished(UMETA_TradeDealSell* inMission);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BMLootEventExpired();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BMLootEventAccepted(EMETA_TradeVendor inVendor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BMHireArmyEventStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BMHireArmyEventFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BMHireArmyEventExpired();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BMEquipmentEventStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BMEquipmentEventFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BMEquipmentEventExpired();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AssetBought(UMETA_PlotlineAsset* InAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AssetAvailableInBlackmarket(UMETA_PlotlineAsset* InAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ArmyMaxCapReached();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AIGangDefendedAttackFromAnotherAIGang(EMETA_Gang inDefenderGang, EMETA_Gang inAttackerGang);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActiveRandEventChanged(EMETA_Partner inPartner, FGameplayTag inEventID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActiveGoalUpdated(UMETA_BaseGoal* inGoal);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActiveDetectivesUpdated();
    
};

