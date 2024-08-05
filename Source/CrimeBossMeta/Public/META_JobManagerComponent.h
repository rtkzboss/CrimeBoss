#pragma once
#include "CoreMinimal.h"
#include "META_PlayedPresets.h"
#include "GameplayTagContainer.h"
#include "EMETA_UsingCrewInGraph.h"
#include "META_FinishedMissionInfo.h"
#include "META_JobParameters.h"
#include "IGS_JobManagerBaseComponent.h"
#include "Templates/SubclassOf.h"
#include "META_JobManagerComponent.generated.h"

class UMETA_BaseMission;
class UMETA_MissionID;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UMETA_JobManagerComponent : public UIGS_JobManagerBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UMETA_MissionID>, FMETA_JobParameters> JobParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMETA_BaseMission* CurrentJob;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMETA_BaseMission*> JobsOnMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 JobsCompletedAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CurrentJobExecutionShouldBeOverriden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UMETA_MissionID>, int32> JobsSpawnDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UMETA_MissionID>, FMETA_FinishedMissionInfo> FinishedJobs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMETA_BaseMission*> TurfWarsOnMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_UsingCrewInGraph CrewUsageAfterMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountOfSoldiersWereSentForGatheringIntel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FMETA_PlayedPresets> RecentlyPlayedPresetsPerScenario;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> PreviousDataBeforeAmbush;
    
public:
    UMETA_JobManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveJobParameterFromStorage(const TSubclassOf<UMETA_MissionID>& inJobID, const FGameplayTag& inTag);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllJobParametersFromStorage(const TSubclassOf<UMETA_MissionID>& inJobID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsThereParametersForJobInStorage(const TSubclassOf<UMETA_MissionID>& inJobID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<UMETA_BaseMission*> GetMissionsOnTile(FGameplayTag inTileTag);
    
    UFUNCTION(BlueprintCallable)
    int32 GetJobParameterFromStorage(const TSubclassOf<UMETA_MissionID>& inJobID, const FGameplayTag& inTag, bool& bOutSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<UMETA_BaseMission*> GetAllSpawnedMissions();
    
    UFUNCTION(BlueprintCallable)
    TMap<FGameplayTag, int32> GetAllJobParametersFromStorage(const TSubclassOf<UMETA_MissionID>& inJobID, bool bFlushAfterGet);
    
    UFUNCTION(BlueprintCallable)
    void ChangeJobParameterInStorage(const TSubclassOf<UMETA_MissionID>& inJobID, const FGameplayTag& inTag, int32 inChangeByValue);
    
    UFUNCTION(BlueprintCallable)
    void AddJobParameterToStorage(const TSubclassOf<UMETA_MissionID>& inJobID, const FGameplayTag& inTag, int32 InValue);
    
};

