#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EMETA_FPSMissionSubtype.h"
#include "EMETA_RespectLvl.h"
#include "META_FPSMissionInfo.h"
#include "META_MissionDatabase.h"
#include "Templates/SubclassOf.h"
#include "QuickMissionsDatabase.generated.h"

class UMETA_BaseMission;
class UMETA_MissionID;
class UObject;

UCLASS(Blueprintable)
class COMMON_DATA_API UQuickMissionsDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UQuickMissionsDatabase();

    UFUNCTION(BlueprintCallable)
    TSubclassOf<UMETA_MissionID> GetRandomMissionIDForScenarios(FGameplayTagContainer inScenarioTags, bool& outSucceeded);
    
    UFUNCTION(BlueprintCallable)
    static UMETA_BaseMission* GetQuickMissionObject(const UObject* inWCO, TSubclassOf<UMETA_MissionID> inMissionID);
    
    UFUNCTION(BlueprintCallable)
    static FMETA_MissionDatabase GetQuickMissionDataBP(const UObject* inWCO, TSubclassOf<UMETA_MissionID> inClass, bool& outSucceeded);
    
    UFUNCTION(BlueprintCallable)
    TArray<TSubclassOf<UMETA_MissionID>> GetMoneyMakingQuickMissionIDsWithLootTypeByUnlockRespect(const UObject* inWCO, FGameplayTag inLootType, EMETA_RespectLvl inUnlockRespect);
    
    UFUNCTION(BlueprintCallable)
    TArray<TSubclassOf<UMETA_MissionID>> GetFpsMissionsIdsWithSubType(EMETA_FPSMissionSubtype inFPSMissionSubtype);
    
    UFUNCTION(BlueprintCallable)
    FMETA_FPSMissionInfo GetFPSMissionInfoBP(TSubclassOf<UMETA_MissionID> inMissionID, bool& outSucceeded);
    
};

