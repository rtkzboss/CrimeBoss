#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_CharacterState.h"
#include "EMETA_Gang.h"
#include "EMETA_Partner.h"
#include "EMETA_RandEventCategory.h"
#include "META_CharacterID.h"
#include "META_HeisterStateChangeHistory.h"
#include "META_HeisterStateChangeNote.h"
#include "META_MissingHeisterEventData.h"
#include "META_RandEventCategoryInfo.h"
#include "META_RandEventRewardRuntimeDataStorage.h"
#include "IGS_RandEventManagerBaseComponent.h"
#include "Templates/SubclassOf.h"
#include "META_RandEventManagerComponent.generated.h"

class UMETA_MissionID;
class UStoryGraphManager;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UMETA_RandEventManagerComponent : public UIGS_RandEventManagerBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMETA_CharacterID, FMETA_HeisterStateChangeHistory> HeistersStateChangesHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMETA_CharacterID, FMETA_MissingHeisterEventData> MissingHeistersEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSoftObjectPtr<UStoryGraphManager>> CrewEventsAndTheirGraphs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSubclassOf<UMETA_MissionID>> CrewEventMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UMETA_MissionID>, FGameplayTag> CrewEventMissionsPrices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CutscenesStartedCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CutscenesFinishedCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FMETA_RandEventRewardRuntimeDataStorage> EventRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_RandEventCategory, FMETA_RandEventCategoryInfo> RandEventCategoriesInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_Partner, FGameplayTag> ActivePartnersRandEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_Partner, FGameplayTag> ReadyForActivationEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> EventsSpecificCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, EMETA_Gang> SelectedGangsForEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FText> GenericEventAndItsCutscene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> CalculatedCostForGenericEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CooldownCounterForFuneralOfGenericHeisters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, bool> UnfulfilledEvents;
    
public:
    UMETA_RandEventManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool ShouldStateChangeBeNoted(FMETA_HeisterStateChangeNote inNote) const;
    
    UFUNCTION(BlueprintCallable)
    void RemoveEventForMissingHeister(FMETA_CharacterID inCharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    TArray<EMETA_CharacterState> GetStatesWhichChangesShouldBeNotedInHistory() const;
    
    UFUNCTION(BlueprintCallable)
    void GetNoteAboutLastChangeToState(FMETA_CharacterID inCharacterID, EMETA_CharacterState inState, FMETA_HeisterStateChangeNote& outNote, bool& outSuccess);
    
    UFUNCTION(BlueprintCallable)
    void GetNoteAboutLastChangeFromStateToState(FMETA_CharacterID inCharacterID, EMETA_CharacterState inFromState, EMETA_CharacterState inToState, FMETA_HeisterStateChangeNote& outNote, bool& outSuccess);
    
    UFUNCTION(BlueprintCallable)
    void GetNoteAboutLastChangeFromState(FMETA_CharacterID inCharacterID, EMETA_CharacterState inState, FMETA_HeisterStateChangeNote& outNote, bool& outSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_CharacterID GetMissingHeisterForMission(TSubclassOf<UMETA_MissionID> inMissionID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetEventIdForMissingHeister(FMETA_CharacterID inCharacterID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEventDataForMissingHeister(FMETA_CharacterID inCharacterID, FMETA_MissingHeisterEventData& outData, bool& outSuccess) const;
    
    UFUNCTION(BlueprintCallable)
    void DecrementMissingHeistersEventsDaysTimer(TMap<FMETA_CharacterID, FMETA_MissingHeisterEventData>& outExpiredEvents);
    
    UFUNCTION(BlueprintCallable)
    void AddStatesChangesNote(FMETA_CharacterID inCharacterID, FMETA_HeisterStateChangeNote inNote);
    
    UFUNCTION(BlueprintCallable)
    void AddEventDataForMissingHeister(FMETA_CharacterID inCharacterID, FMETA_MissingHeisterEventData inData);
    
};

