#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EIGS_MetaDialogueCharacter.h"
#include "EIGS_MetaDialogueCharacterSlot.h"
#include "IGS_MetaDialogueDelegateDelegate.h"
#include "IGS_MetaDialogueLineDelegateDelegate.h"
#include "IGS_PlayMetaDialogue.generated.h"

class UIGS_PlayMetaDialogue;
class UObject;

UCLASS(Blueprintable)
class BF_VOICEOVER_API UIGS_PlayMetaDialogue : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MetaDialogueLineDelegate DialogueLineStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MetaDialogueLineDelegate DialogueLineFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MetaDialogueDelegate DialogueFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MetaDialogueDelegate DialogueCanceled;
    
    UIGS_PlayMetaDialogue();

    UFUNCTION(BlueprintCallable)
    void StartDialogueLine(FName inLineID, EIGS_MetaDialogueCharacterSlot inSlot, int32 inLineOrderID, int32 inLinesCount, float inLineLength);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_PlayMetaDialogue* PlayMetaDialogue(UObject* inWCO, FText DialogueID, UPARAM(Ref) TMap<EIGS_MetaDialogueCharacterSlot, EIGS_MetaDialogueCharacter>& inCharacters);
    
    UFUNCTION(BlueprintCallable)
    void FinishDialogueLine(FName inLineID, EIGS_MetaDialogueCharacterSlot inSlot, int32 inLineOrderID, int32 inLinesCount, float inLineLength);
    
    UFUNCTION(BlueprintCallable)
    void FinishDialogue();
    
};

