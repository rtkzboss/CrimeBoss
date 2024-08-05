#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EMETA_Gang.h"
#include "EMETA_Heat.h"
#include "EMETA_RandEventCategory.h"
#include "EMETA_RespectLvl.h"
#include "META_RandEventReward.h"
#include "META_RandEventTableRow.h"
#include "Templates/SubclassOf.h"
#include "META_RandEventsDatabase.generated.h"

class UMETA_MissionID;
class UObject;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UMETA_RandEventsDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UMETA_RandEventsDatabase();

    UFUNCTION(BlueprintCallable)
    TArray<FMETA_RandEventTableRow> GetSuitableEvents(const UObject* inWCO, EMETA_RandEventCategory inEventsCategory, EMETA_RespectLvl inRespectLvl, EMETA_Heat inCurrentHeat, int32 inCurrentBalance, FGameplayTagContainer inStorylineAssets, bool inCheckChance);
    
    UFUNCTION(BlueprintCallable)
    TArray<FMETA_RandEventReward> GetEventRewards(FGameplayTag inEventID);
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<UMETA_MissionID> GetEventMission(FGameplayTag inEventID);
    
    UFUNCTION(BlueprintCallable)
    FMETA_RandEventTableRow GetEventInfo(FGameplayTag inEventID, bool& outSuccess);
    
    UFUNCTION(BlueprintCallable)
    void GetEventCutsceneData(FGameplayTag inEventID, EMETA_Gang inGangForCutscene, FText& outCutsceneID, FText& outDebugText);
    
    UFUNCTION(BlueprintCallable)
    int32 GetEventCost(FGameplayTag inEventID, EMETA_RespectLvl inRespectLvl);
    
    UFUNCTION(BlueprintCallable)
    EMETA_RandEventCategory GetEventCategory(FGameplayTag inEventID);
    
};

