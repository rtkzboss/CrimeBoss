#pragma once
#include "CoreMinimal.h"
#include "EIGS_MetaDialogueCharacter.h"
#include "EIGS_MetaDialogueCharacterSlot.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EIGS_MetaCutsceneCharacterPose.h"
#include "EIGS_MetaCutsceneNodeAction.h"
#include "IGS_CutsceneTagValue.h"
#include "EIGS_CutsceneState.h"
#include "IGS_MetaCutsceneCharacterPoseData.h"
#include "IGS_MetaCutsceneCharacters.h"
#include "IGS_MetaCutsceneDataRow.h"
#include "IGS_MetaCutsceneDelegateDelegate.h"
#include "IGS_MetaCutsceneNodeFinishedDelegateDelegate.h"
#include "IGS_MetaCutsceneNodeStartedDelegateDelegate.h"
#include "IGS_MetaCutsceneOptionSelectedDelegateDelegate.h"
#include "IGS_MetaCutsceneOptionsDelegateDelegate.h"
#include "IGS_MetaCutscenePoseSet.h"
#include "IGS_MetaCutsceneResultDelegateDelegate.h"
#include "IGS_MetaCutsceneSkipDelegateDelegate.h"
#include "IGS_MetaCutsceneSubsystem.generated.h"

class AActor;
class AIGS_CharacterPaperDoll;
class UIGS_CutsceneSubsystemDataAsset;
class UIGS_MetaCutsceneDataAsset;
class ULevelStreamingDynamic;
class UObject;

UCLASS(Blueprintable)
class PAYBACK_API UIGS_MetaCutsceneSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MetaCutsceneDelegate OnCutsceneDatabaseLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MetaCutsceneDelegate OnCutsceneLoadStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MetaCutsceneDelegate OnCutsceneLoadFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MetaCutsceneDelegate OnCutsceneUnloadFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MetaCutsceneResultDelegate OnCutsceneStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MetaCutsceneResultDelegate OnCutsceneStartedAfterDelay;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MetaCutsceneDelegate OnCutsceneFinishedBeforeDelay;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MetaCutsceneResultDelegate OnCutsceneFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MetaCutsceneNodeStartedDelegate OnCutsceneNodeStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MetaCutsceneNodeFinishedDelegate OnCutsceneNodeFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MetaCutsceneNodeStartedDelegate OnCutsceneNodeEndDialogue;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MetaCutsceneOptionsDelegate OnShowOptions;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MetaCutsceneOptionSelectedDelegate OnOptionSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MetaCutsceneSkipDelegate OnSkipStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MetaCutsceneNodeStartedDelegate OnSkipSequence;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_CutsceneSubsystemDataAsset* Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_MetaCutsceneDataAsset* CutsceneData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelStreamingDynamic*> AdditionalLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> AdditionalProps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelStreamingDynamic* EnviromentLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelStreamingDynamic* SetupLevel;
    
public:
    UIGS_MetaCutsceneSubsystem();

    UFUNCTION(BlueprintCallable)
    void StartCutscene();
    
    UFUNCTION(BlueprintCallable)
    void SkipCutsceneDialogueLine();
    
    UFUNCTION(BlueprintCallable)
    void SkipCutsceneDialogue();
    
    UFUNCTION(BlueprintCallable)
    void ShowOptions(float inTimeToSelect);
    
    UFUNCTION(BlueprintCallable)
    void SetTagsValues(TMap<FGameplayTag, FIGS_CutsceneTagValue> inTagsValues);
    
    UFUNCTION(BlueprintCallable)
    void SetSkipDialogueLineEnabled(bool inState);
    
    UFUNCTION(BlueprintCallable)
    void SetForceChoiceResult(EIGS_MetaCutsceneNodeAction inResult);
    
    UFUNCTION(BlueprintCallable)
    void SetFinishDelay(float inFinishDelay);
    
    UFUNCTION(BlueprintCallable)
    void SetEndDelay(float inEndDelay);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugEnabled(bool inState);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugContinueEnabled(bool inState);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoFinishEnabled(bool inState);
    
    UFUNCTION(BlueprintCallable)
    void SelectOption(int32 inOption);
    
    UFUNCTION(BlueprintCallable)
    void PlayCurrentNodeOptionEndDialogue(int32 inOption);
    
    UFUNCTION(BlueprintCallable)
    void PlayCurrentNodeDialogue();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSetupLevelUnloaded();
    
    UFUNCTION(BlueprintCallable)
    void OnSetupLevelLoaded();
    
    UFUNCTION(BlueprintCallable)
    void OnOriginalSublevelHidden();
    
    UFUNCTION(BlueprintCallable)
    void OnEnvironmentLevelUnloaded();
    
    UFUNCTION(BlueprintCallable)
    void OnEnvironmentLevelLoaded();
    
    UFUNCTION(BlueprintCallable)
    void OnDialogueStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnDialogueLevelPreloaded();
    
    UFUNCTION(BlueprintCallable)
    void OnDialogueFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnDialogueDatabasesLoaded();
    
    UFUNCTION(BlueprintCallable)
    void OnAdditionalPropsLoaded();
    
    UFUNCTION(BlueprintCallable)
    void OnAdditionalLevelUnloaded();
    
    UFUNCTION(BlueprintCallable)
    void OnAdditionalLevelLoaded();
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadCutscene(FName inCutsceneID, FText inDebugText, FIGS_MetaCutsceneCharacters inCharacters);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSkipCutsceneDialogueActivated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDatabaseLoaded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCutscenePreloaded() const;
    
    UFUNCTION(BlueprintCallable)
    bool HasCurrentNodeOptions();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FGameplayTag, FIGS_CutsceneTagValue> GetTagsValues() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<TSoftClassPtr<AIGS_CharacterPaperDoll>> GetSlotCharactersPaperDoll();
    
    UFUNCTION(BlueprintCallable)
    FName GetEndSequenceName(int32 inOption);
    
    UFUNCTION(BlueprintCallable)
    EIGS_MetaDialogueCharacter GetDialogueSlotCharacter(EIGS_MetaDialogueCharacterSlot inDialogueSlot);
    
    UFUNCTION(BlueprintCallable)
    EIGS_MetaDialogueCharacterSlot GetDialogueSlot(EIGS_MetaDialogueCharacterSlot inCutsceneSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_CutsceneSubsystemDataAsset* GetCutsceneSubsystemDataAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_CutsceneState GetCutsceneState() const;
    
    UFUNCTION(BlueprintCallable)
    EIGS_MetaDialogueCharacter GetCutsceneSlotCharacter(EIGS_MetaDialogueCharacterSlot inCutsceneSlot);
    
    UFUNCTION(BlueprintCallable)
    EIGS_MetaDialogueCharacterSlot GetCutsceneSlot(EIGS_MetaDialogueCharacterSlot inDialogueSlot);
    
    UFUNCTION(BlueprintCallable)
    static TSoftObjectPtr<UIGS_MetaCutsceneDataAsset> GetCutsceneDataAsset(UObject* inWCO, FText inCutsceneID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentNodeSkipTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_MetaCutsceneDataAsset* GetCurrentCutsceneDataAsset() const;
    
    UFUNCTION(BlueprintCallable)
    FIGS_MetaCutsceneCharacterPoseData GetCharacterSlotPose(EIGS_MetaDialogueCharacterSlot inSlot, FGameplayTagContainer inPoseSets);
    
    UFUNCTION(BlueprintCallable)
    FIGS_MetaCutsceneCharacterPoseData GetCharacterPose(EIGS_MetaDialogueCharacter inCharacter, FGameplayTag inCharacterPoseSet, EIGS_MetaCutsceneCharacterPose InPose);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FIGS_MetaCutsceneDataRow> GetAllCutscenesData(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    FIGS_MetaCutscenePoseSet GetAllCharacterSlotPoses(EIGS_MetaDialogueCharacterSlot inSlot, FGameplayTagContainer inPoseSets);
    
    UFUNCTION(BlueprintCallable)
    FIGS_MetaCutscenePoseSet GetAllCharacterPoses(EIGS_MetaDialogueCharacter inCharacter, FGameplayTag inCharacterPoseSet);
    
    UFUNCTION(BlueprintCallable)
    void FinishCutscene();
    
    UFUNCTION(BlueprintCallable)
    void AllowPoseSet(FGameplayTag inPoseSet);
    
};

