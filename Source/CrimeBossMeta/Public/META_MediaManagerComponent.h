#pragma once
#include "CoreMinimal.h"
#include "META_DialogueUIData.h"
#include "META_CutsceneUIData.h"
#include "META_MovieUIData.h"
#include "META_TextScreenUIData.h"
#include "GameplayTagContainer.h"
#include "EMETA_Partner.h"
#include "IGS_MediaManagerBaseComponent.h"
#include "IGS_OnCutsceneFinishedLatentDelegate.h"
#include "IGS_OnCutsceneStartedLatentDelegate.h"
#include "IGS_OnMovieFinishedLatentDelegate.h"
#include "IGS_OnMovieStartedLatentDelegate.h"
#include "META_MediaManagerComponent.generated.h"

class UMETA_VoiceoverDialogueSettings;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UMETA_MediaManagerComponent : public UIGS_MediaManagerBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_CutsceneUIData> QueuedCutscenes;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnCutsceneStartedLatent OnCutsceneStartedLatent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnCutsceneFinishedLatent OnCutsceneFinishedLatent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_MovieUIData> QueuedMovies;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnMovieStartedLatent OnMovieStartedLatent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnMovieFinishedLatent OnMovieFinishedLatent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_DialogueUIData> QueuedDialogues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_TextScreenUIData> QueuedTextScreens;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMETA_VoiceoverDialogueSettings* DialogueSettings;
    
public:
    UMETA_MediaManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SubtractDaysForDelayedCutscenes();
    
    UFUNCTION(BlueprintCallable)
    void RemoveTextScreenFromQueue(FMETA_TextScreenUIData inTextScreenData);
    
    UFUNCTION(BlueprintCallable)
    void RemoveMovieFromQueue(FMETA_MovieUIData inMovieData);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDialogueFromQueue(FMETA_DialogueUIData inDialogueData);
    
    UFUNCTION(BlueprintCallable)
    void RemoveCutsceneFromQueue(FMETA_CutsceneUIData inCutsceneData);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllDialoguesWithLowerPrio(FGameplayTag inScreenTag, int32 InPriority);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllDialoguesOfType(FGameplayTag inScreenTag, FGameplayTag inTypeTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayMovieLatent(FMETA_MovieUIData inMovieData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayCutsceneLatent(FMETA_CutsceneUIData inCutsceneData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyTextScreenPending() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void IsAnyMediaCurrentlyPlaying(bool& outPlaying);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyInstantCutscenePending() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyDelayedCutscenePending(EMETA_Partner inPartner) const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumberOfInstantCutscenesPending();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumberOfDelayedCutscenesPending(EMETA_Partner inPartner);
    
    UFUNCTION(BlueprintCallable)
    FMETA_DialogueUIData GetHighestPrioQueuedDialogue(FGameplayTag inScreenTag, bool& outResult);
    
    UFUNCTION(BlueprintCallable)
    FMETA_TextScreenUIData GetFirstQueuedTextScreen(bool& outResult);
    
    UFUNCTION(BlueprintCallable)
    FMETA_MovieUIData GetFirstQueuedMovie(bool& outResult);
    
    UFUNCTION(BlueprintCallable)
    FMETA_CutsceneUIData GetFirstQueuedInstantCutscene(bool& outResult);
    
    UFUNCTION(BlueprintCallable)
    FMETA_DialogueUIData GetFirstQueuedDialogue(FGameplayTag inScreenTag, bool& outResult);
    
    UFUNCTION(BlueprintCallable)
    FMETA_CutsceneUIData GetFirstDelayedCutsceneForPartner(EMETA_Partner inPartner, bool& outResult);
    
    UFUNCTION(BlueprintCallable)
    TArray<FMETA_CutsceneUIData> GetExpiredCutscenes(bool& outResult);
    
    UFUNCTION(BlueprintCallable)
    TArray<FMETA_CutsceneUIData> GetCutscenesAboutToExpire(bool& outResult);
    
};

