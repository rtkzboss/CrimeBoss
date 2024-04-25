#pragma once
#include "CoreMinimal.h"
#include "IGS_PlayDialogueNodeBase.h"
#include "IGS_PlayHeisterDialogue.generated.h"

class UIGS_PlayHeisterDialogue;
class UObject;

UCLASS(Blueprintable)
class BF_VOICEOVER_API UIGS_PlayHeisterDialogue : public UIGS_PlayDialogueNodeBase {
    GENERATED_BODY()
public:
    UIGS_PlayHeisterDialogue();

    UFUNCTION(BlueprintCallable)
    static UIGS_PlayHeisterDialogue* PlayHeisterDialogue(UObject* inWCO, FText DialogueID);
    
};

