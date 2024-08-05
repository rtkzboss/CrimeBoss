#pragma once
#include "CoreMinimal.h"
#include "IGS_DialogueAsyncActionInterface.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "IGS_DialogueAsyncNodeDelegateDelegate.h"
#include "IGS_PlayDialogueNodeBase.generated.h"

UCLASS(Abstract, Blueprintable)
class BF_VOICEOVER_API UIGS_PlayDialogueNodeBase : public UBlueprintAsyncActionBase, public IIGS_DialogueAsyncActionInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_DialogueAsyncNodeDelegate DialogueFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_DialogueAsyncNodeDelegate DialogueStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_DialogueAsyncNodeDelegate DialogueLineStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_DialogueAsyncNodeDelegate DialogueLineFinished;
    
    UIGS_PlayDialogueNodeBase();


    // Fix for true pure virtual functions not being implemented
};

