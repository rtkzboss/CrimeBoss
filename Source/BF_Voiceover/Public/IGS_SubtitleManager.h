#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DialogueSubtitleEnabledEventDelegate.h"
#include "DialogueSubtitleInsertEventDelegate.h"
#include "DialogueSubtitleRemoveEventDelegate.h"
#include "DialogueTestSubtitleInsertEventDelegate.h"
#include "EIGS_SubtitleType.h"
#include "IGS_SubtitleData.h"
#include "IGS_SubtitleManager.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_VOICEOVER_API UIGS_SubtitleManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogueTestSubtitleInsertEvent OnDialogueTestSubtitleInsertEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogueSubtitleInsertEvent OnDialogueSubtitleInsertEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogueSubtitleRemoveEvent OnDialogueSubtitleClearEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogueSubtitleEnabledEvent OnDialogueSubtitleEnabledEvent;
    
    UIGS_SubtitleManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static void ShowDialogueTestSubtitle(const UObject* inWCO, const FString& inDialogueText);
    
    UFUNCTION(BlueprintCallable)
    void SetDialogueSubtitleEnabled(bool inState, EIGS_SubtitleType inSubtitleType);
    
    UFUNCTION(BlueprintCallable)
    void InsertDialogueSubtitle(const FIGS_SubtitleData& inSubtitleData);
    
    UFUNCTION(BlueprintCallable)
    void ClearDialogueSubtitle(EIGS_SubtitleType inSubtitleType);
    
    UFUNCTION(BlueprintCallable)
    void ClearAndDisableAllSubtitles();
    
};

