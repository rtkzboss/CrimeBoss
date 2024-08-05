#pragma once
#include "CoreMinimal.h"
#include "IGS_PlayDialogueNodeBase.h"
#include "IGS_PlayDialogueOnCharacter.generated.h"

class AActor;
class UIGS_PlayDialogueOnCharacter;
class UObject;

UCLASS(Blueprintable)
class BF_VOICEOVER_API UIGS_PlayDialogueOnCharacter : public UIGS_PlayDialogueNodeBase {
    GENERATED_BODY()
public:
    UIGS_PlayDialogueOnCharacter();

    UFUNCTION(BlueprintCallable)
    static UIGS_PlayDialogueOnCharacter* PlayDialogueOnCharacter(UObject* inWCO, FText DialogueID, AActor* inCharacter);
    
};

