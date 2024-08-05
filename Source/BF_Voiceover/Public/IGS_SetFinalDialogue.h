#pragma once
#include "CoreMinimal.h"
#include "IGS_DialogueAsyncActionInterface.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "IGS_FinalDialogueDelegateDelegate.h"
#include "IGS_SetFinalDialogue.generated.h"

class AActor;
class UIGS_SetFinalDialogue;
class UObject;

UCLASS(Blueprintable)
class BF_VOICEOVER_API UIGS_SetFinalDialogue : public UBlueprintAsyncActionBase, public IIGS_DialogueAsyncActionInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_FinalDialogueDelegate DialogueFinished;
    
    UIGS_SetFinalDialogue();

    UFUNCTION(BlueprintCallable)
    static UIGS_SetFinalDialogue* SetFinalDialogue(UObject* inWCO, FText DialogueID, AActor* Character);
    

    // Fix for true pure virtual functions not being implemented
};

