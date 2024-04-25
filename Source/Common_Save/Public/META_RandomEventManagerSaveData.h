#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_Gang.h"
#include "EMETA_Partner.h"
#include "EMETA_RandEventCategory.h"
#include "META_CharacterID.h"
#include "META_HeisterStateChangeHistory.h"
#include "META_MissingHeisterEventData.h"
#include "META_RandEventCategoryInfo.h"
#include "META_RandEventRewardRuntimeDataStorage.h"
#include "Templates/SubclassOf.h"
#include "META_RandomEventManagerSaveData.generated.h"

class UMETA_BaseStoryGraphManager;
class UMETA_MissionID;

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FMETA_RandomEventManagerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<EMETA_RandEventCategory, FMETA_RandEventCategoryInfo> RandEventCategoriesInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<EMETA_Partner, FGameplayTag> CurrentPartnersRandEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<EMETA_Partner, FGameplayTag> ReadyForActivationEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> EventsSpecificCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, EMETA_Gang> SelectedGangForEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FMETA_RandEventRewardRuntimeDataStorage> EventRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSubclassOf<UMETA_MissionID>> CrewEventMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> CalculatedCostForGenericEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UMETA_MissionID>, FGameplayTag> CrewEventMissionsPrices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSoftObjectPtr<UMETA_BaseStoryGraphManager>> CrewEventsAndTheirGraphs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FMETA_CharacterID, FMETA_HeisterStateChangeHistory> HeistersStateChangesHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FMETA_CharacterID, FMETA_MissingHeisterEventData> MissingHeistersEventsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 CooldownCounterForFuneralOfGenericHeisters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, bool> UnfulfilledEvents;
    
    FMETA_RandomEventManagerSaveData();
};

