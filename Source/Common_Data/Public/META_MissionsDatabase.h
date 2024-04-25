#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "EIGS_HubBackdropTypes.h"
#include "EMETA_FPSMissionSubtype.h"
#include "EMETA_JobResult.h"
#include "EMETA_JobType.h"
#include "EMETA_TradeVendor.h"
#include "EMETA_TurfWarMissionType.h"
#include "META_MoneyMakingMissionMainDataFromDatabase.h"
#include "META_ObjectiveRewardData.h"
#include "META_ObjectiveTableRow.h"
#include "META_FPSMissionInfo.h"
#include "META_MissionDatabase.h"
#include "Templates/SubclassOf.h"
#include "META_MissionsDatabase.generated.h"

class UMETA_BaseMission;
class UMETA_MissionID;
class UObject;

UCLASS(Blueprintable)
class COMMON_DATA_API UMETA_MissionsDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UMETA_MissionsDatabase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItTurfWarMissionID(const TSubclassOf<UMETA_MissionID>& inMissionID, EMETA_JobType& outMissionType) const;
    
    UFUNCTION(BlueprintCallable)
    static TArray<FMETA_MoneyMakingMissionMainDataFromDatabase> GetMoneyMakingMissionIDsWithLootType(const UObject* inWCO, FGameplayTag inLootType);
    
    UFUNCTION(BlueprintCallable)
    static UMETA_BaseMission* GetMissionObject(const UObject* inWCO, TSubclassOf<UMETA_MissionID> inMissionID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UMETA_MissionID> GetMissionIDByTurfWarTypeAndDistrict(EMETA_TurfWarMissionType inTurfWarType, EIGS_HubBackdropTypes inBackdropType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UMETA_MissionID> GetMissionIDByTurfWarType(EMETA_TurfWarMissionType inTurfWarType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UMETA_MissionID> GetMissionIDByTradeVendor(EMETA_TradeVendor inVendor) const;
    
    UFUNCTION(BlueprintCallable)
    static FMETA_MissionDatabase GetMissionDataBP(const UObject* inWCO, TSubclassOf<UMETA_MissionID> inClass, bool& outSucceeded);
    
    UFUNCTION(BlueprintCallable)
    TArray<TSubclassOf<UMETA_MissionID>> GetFpsMissionsIdsWithSubType(EMETA_FPSMissionSubtype inFPSMissionSubtype);
    
    UFUNCTION(BlueprintCallable)
    FMETA_FPSMissionInfo GetFPSMissionInfoBP(TSubclassOf<UMETA_MissionID> inMissionID, bool& outSucceeded);
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<UMETA_MissionID> GetAmbushMission(TSubclassOf<UMETA_MissionID> inMissionID, bool& outSucceeded);
    
    UFUNCTION(BlueprintCallable)
    FGameplayTag GetAmbushChanceTagByMissionID(TSubclassOf<UMETA_MissionID> inMissionID);
    
    UFUNCTION(BlueprintCallable)
    TArray<FMETA_MissionDatabase> GetAllFPSMissions();
    
    UFUNCTION(BlueprintCallable)
    bool GenerateMissionObjectiveBP(const UObject* inWCO, const UMETA_BaseMission* inMission, FMETA_ObjectiveTableRow& outBonusObjective, FMETA_ObjectiveRewardData& outRewardData);
    
    UFUNCTION(BlueprintCallable)
    static bool CanMissionBeRemovedFromTheMap(const UObject* inWCO, TSubclassOf<UMETA_MissionID> inMissionID, EMETA_JobResult inJobResult);
    
};

