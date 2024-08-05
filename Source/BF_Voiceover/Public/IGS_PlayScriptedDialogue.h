#pragma once
#include "CoreMinimal.h"
#include "IGS_PlayDialogueNodeBase.h"
#include "IGS_PlayScriptedDialogue.generated.h"

class AActor;
class UIGS_PlayScriptedDialogue;
class UObject;

UCLASS(Blueprintable)
class BF_VOICEOVER_API UIGS_PlayScriptedDialogue : public UIGS_PlayDialogueNodeBase {
    GENERATED_BODY()
public:
    UIGS_PlayScriptedDialogue();

    UFUNCTION(BlueprintCallable)
    static UIGS_PlayScriptedDialogue* PlayScriptedDialogue(UObject* inWCO, FText DialogueID, UPARAM(Ref) TArray<AActor*>& inCharacters);
    
};

