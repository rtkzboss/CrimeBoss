#pragma once
#include "CoreMinimal.h"
#include "IGS_LoadingInProgressInterface.h"
#include "Subsystems/WorldSubsystem.h"
#include "EIGS_DialogueSpeaker.h"
#include "EIGS_DialogueBlacklistOption.h"
#include "IGS_DialogueCharacterEventDelegate.h"
#include "IGS_DialogueEventDelegate.h"
#include "IGS_DialogueNodeKey.h"
#include "IGS_HudDebugEventDelegate.h"
#include "IGS_DialogueSubsystem.generated.h"

class AActor;
class IIGS_DialogueAsyncActionInterface;
class UIGS_DialogueAsyncActionInterface;

UCLASS(Blueprintable)
class BF_VOICEOVER_API UIGS_DialogueSubsystem : public UWorldSubsystem, public IIGS_LoadingInProgressInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_DialogueCharacterEvent OnCharacterReminderEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_DialogueEvent OnDialogueFinishedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_HudDebugEvent OnNewHudDebugLogEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FIGS_DialogueNodeKey, TScriptInterface<IIGS_DialogueAsyncActionInterface>> RegisteredDialogueNodesMap;
    
public:
    UIGS_DialogueSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void StopVoiceOnSpeaker(EIGS_DialogueSpeaker inSpeaker) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void StopVoiceOnCharacter(AActor* inInstigator) const;
    
    UFUNCTION(BlueprintCallable)
    void StopAllDialogues();
    
    UFUNCTION(BlueprintCallable)
    void SetSubsystemEnabled(bool inState);
    
    UFUNCTION(BlueprintCallable)
    void SetReminderDialogues(TArray<FText> inStealthDialogues, TArray<FText> inCombatDialogues);
    
    UFUNCTION(BlueprintCallable)
    void SetHeisterReminderTime(float InSeconds);
    
    UFUNCTION(BlueprintCallable)
    void SetBlacklistOption(EIGS_DialogueBlacklistOption inOption);
    
    UFUNCTION(BlueprintCallable)
    void SetBlacklistEnabled(bool inState);
    
    UFUNCTION(BlueprintCallable)
    void ResetSubsystem();
    
    UFUNCTION(BlueprintCallable)
    void PlayScriptedDialogue(FText inDialogueID, const TArray<AActor*>& inCharacters);
    
    UFUNCTION(BlueprintCallable)
    void PlayHeisterDialogue(FText inDialogueID);
    
    UFUNCTION(BlueprintCallable)
    void PlayFinalDialogue(FText inDialogueID, AActor* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    void PlayDialogueOnCharacter(FText inDialogueID, AActor* inCharacter);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnGameLoadingFinished();
    

    // Fix for true pure virtual functions not being implemented
};

