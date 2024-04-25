#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EIGS_MetaDialogueCharacter.h"
#include "IGS_MetaDialogueDelegateDelegate.h"
#include "IGS_PreloadMetaLevelDialogue.generated.h"

class UIGS_PreloadMetaLevelDialogue;
class UObject;

UCLASS(Blueprintable)
class BF_VOICEOVER_API UIGS_PreloadMetaLevelDialogue : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MetaDialogueDelegate PreloadFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MetaDialogueDelegate PreloadCanceled;
    
    UIGS_PreloadMetaLevelDialogue();

    UFUNCTION(BlueprintCallable)
    static UIGS_PreloadMetaLevelDialogue* PreloadMetaLevelDialogues(UObject* inWCO, FText DialogueID, UPARAM(Ref) TArray<EIGS_MetaDialogueCharacter>& inCharacters);
    
    UFUNCTION(BlueprintCallable)
    void FinishPreload();
    
};

