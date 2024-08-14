#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "EIGS_HubBackdropTypes.h"
#include "EIGS_HubDistrict.h"
#include "EMETA_Gang.h"
#include "EMETA_TileSize.h"
#include "EMETA_TileType.h"
#include "EMETA_TileWealth.h"
#include "META_BossEliminationRewardData.h"
#include "META_DetectiveInfo.h"
#include "META_TileRewardData.h"
#include "EMETA_MapDisplayMode.h"
#include "MapTileRow.h"
#include "OnConquestStateChangedDelegateDelegate.h"
#include "OnDetectivesChangedDelegateDelegate.h"
#include "OnDisplayModeChangedDelegateDelegate.h"
#include "OnGangChangedDelegateDelegate.h"
#include "OnMissionAddedDelegateDelegate.h"
#include "OnMissionRemovedDelegateDelegate.h"
#include "OnMissionsChangedDelegateDelegate.h"
#include "OnToggleHighglightedDelegateDelegate.h"
#include "OnToggleIconSelectedDelegateDelegate.h"
#include "OnToggleSelectedDelegateDelegate.h"
#include "OnTypeChangedDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "MapTile.generated.h"

class UMETA_BaseMission;
class UMETA_DetectiveID;
class UMETA_MissionID;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UMapTile : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMETA_BaseMission* TurfWarObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isHighlighted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isIconSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isBossEliminationRewardsExist;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnToggleHighglightedDelegate OnToggleHighglighted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnToggleSelectedDelegate OnToggleSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnToggleIconSelectedDelegate OnToggleIconSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnToggleSelectedDelegate OnToggleTurfIconSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGangChangedDelegate OnGangChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTypeChangedDelegate OnTypeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnConquestStateChangedDelegate OnConquestStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDisplayModeChangedDelegate OnDisplayModeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionsChangedDelegate OnMissionsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionAddedDelegate OnMissionAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionRemovedDelegate OnMissionRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDetectivesChangedDelegate OnDetectivesChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag m_ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_Gang m_Gang;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> m_Neighbours;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_Gang m_ConquestState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_TileType m_Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_HubDistrict m_DistrictType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_HubBackdropTypes m_BackdropType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_TileSize m_TileSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMETA_BaseMission*> m_Missions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_MinAmountOfSoldiersForAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_MinAmountOfSoldiersForDefence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_CurrentStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_WeaknessLowerTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_CurrentWeakness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_WeaknessExpireDays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_CounterOfCapturesByPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_TileWealth m_Wealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_IncomeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_CountdownForAttackAfterLost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_IncomeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_OutIncomeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag m_IncomeLootItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_TileRewardData> m_CaptureRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_BossEliminationRewardData> m_BossEliminationRewardData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UMETA_DetectiveID>, FMETA_DetectiveInfo> m_Detectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_MapDisplayMode m_DisplayMode;
    
public:
    UMapTile();

    UFUNCTION(BlueprintCallable)
    void ToggleTurfIconSelected(bool inSelected);
    
    UFUNCTION(BlueprintCallable)
    void ToggleSelected(bool inSelected);
    
    UFUNCTION(BlueprintCallable)
    void ToggleIconSelected(bool inSelected, UMETA_BaseMission* inMissionID);
    
    UFUNCTION(BlueprintCallable)
    void ToggleHighlighted(bool inHighlighted);
    
    UFUNCTION(BlueprintCallable)
    void SetWeaknessLowerTier(bool inState);
    
    UFUNCTION(BlueprintCallable)
    void SetWeaknessExpirationInDays(int32 inDays);
    
    UFUNCTION(BlueprintCallable)
    void SetType(EMETA_TileType inType);
    
    UFUNCTION(BlueprintCallable)
    void SetTurfWarData(int32 inMinAmountOfSoldiersForAttack, int32 inMinAmountOfSoldiersForDefence);
    
    UFUNCTION(BlueprintCallable)
    void SetTileWealth(EMETA_TileWealth InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetRawCaptureRewards(TArray<FMETA_TileRewardData> inRewards);
    
    UFUNCTION(BlueprintCallable)
    void SetMissions(TArray<UMETA_BaseMission*> inMissions);
    
    UFUNCTION(BlueprintCallable)
    void SetIncomeValueMultiplier(float inValueMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetIncomeLoot(FGameplayTag inLootItem);
    
    UFUNCTION(BlueprintCallable)
    void SetGang(EMETA_Gang inGang);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayMode(EMETA_MapDisplayMode inDisplayMode);
    
    UFUNCTION(BlueprintCallable)
    void SetDetectives(TMap<TSubclassOf<UMETA_DetectiveID>, FMETA_DetectiveInfo> inDetectives);
    
    UFUNCTION(BlueprintCallable)
    void SetData(FMapTileRow inTileRow);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentWeakness(int32 inWeakness);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentStrength(int32 inCurrentStrength);
    
    UFUNCTION(BlueprintCallable)
    void SetCountdownAfterLost(int32 inCountdown);
    
    UFUNCTION(BlueprintCallable)
    void SetConquestState(EMETA_Gang inGang);
    
    UFUNCTION(BlueprintCallable)
    void SetBossEleminationRewards(TArray<FMETA_BossEliminationRewardData> inRewards);
    
    UFUNCTION(BlueprintCallable)
    void ResetWeakness();
    
    UFUNCTION(BlueprintCallable)
    void RemoveMission(UMETA_BaseMission* inMission);
    
    UFUNCTION(BlueprintCallable)
    void IncreaseCounterOfCapturesByPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_TileWealth GetWealth();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetWeaknessLowerTier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWeaknessExpirationInDays() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_TileType GetType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_TileSize GetTileSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGameplayTag> GetNeighbours() const;
    
    UFUNCTION(BlueprintCallable)
    FText GetName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMETA_BaseMission*> GetMissions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<UMETA_MissionID>> GetMissionClasses() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMinAmountOfSoldiersForDefence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMinAmountOfSoldiersForAttack() const;
    
    UFUNCTION(BlueprintCallable)
    void GetIncome(const UObject* inWCO, int32& OutValue, FGameplayTag& outLootItem);
    
    UFUNCTION(BlueprintCallable)
    FGameplayTag GetId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_Gang GetGang() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_HubDistrict GetDistrictType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_MapDisplayMode GetDisplayMode() const;
    
    UFUNCTION(BlueprintCallable)
    TMap<TSubclassOf<UMETA_DetectiveID>, FMETA_DetectiveInfo> GetDetectives();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentWeakness() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentStrength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCounterOfCapturesByPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCountdownAfterLost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_Gang GetConquestState() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FMETA_TileRewardData> GetCalculatedCaptureRewards(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    TArray<FMETA_BossEliminationRewardData> GetCalculatedBossEliminationRewards(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMETA_BossEliminationRewardData> GetBossEliminationRewardData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_HubBackdropTypes GetBackdropType() const;
    
    UFUNCTION(BlueprintCallable)
    void DecreaseExpireWeakness();
    
    UFUNCTION(BlueprintCallable)
    void ClearMissions();
    
    UFUNCTION(BlueprintCallable)
    void ClearDetectives();
    
    UFUNCTION(BlueprintCallable)
    void ClearBossEleminationRewards();
    
    UFUNCTION(BlueprintCallable)
    void AddMission(UMETA_BaseMission* inMission);
    
};

