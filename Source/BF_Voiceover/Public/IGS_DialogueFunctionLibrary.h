#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EIGS_DialogueHeisterCharacter.h"
#include "EIGS_DialogueSpeaker.h"
#include "EIGS_DialogueSwatCharacter.h"
#include "EIGS_DialogueUniCharacter.h"
#include "IGS_DialogueGroupCharacterHolder.h"
#include "EIGS_MetaDialogueCharacter.h"
#include "IGS_DialogueFunctionLibrary.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable)
class BF_VOICEOVER_API UIGS_DialogueFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_DialogueFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void StopHeisterDialogue(UObject* inWCO, FText inDialogueID);
    
    UFUNCTION(BlueprintCallable)
    static void StopDialogueOnCharacter(UObject* inWCO, FText inDialogueID, AActor* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static void StopAllDialogues(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static FName GetLevelIDFromLineID(FName inLineID);
    
    UFUNCTION(BlueprintCallable)
    static FName GetLevelID(FText inDialogueID);
    
    UFUNCTION(BlueprintCallable)
    static EIGS_DialogueSpeaker GetDialogueSpeakerFromDialogueHolder(FIGS_DialogueGroupCharacterHolder inHolder);
    
    UFUNCTION(BlueprintCallable)
    static FText GetDialogueID(const FString& inDialogueID);
    
    UFUNCTION(BlueprintCallable)
    static FIGS_DialogueGroupCharacterHolder CreateUniCharacterHolder(EIGS_DialogueUniCharacter inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static FIGS_DialogueGroupCharacterHolder CreateSwatCharacterHolder(EIGS_DialogueSwatCharacter inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static FIGS_DialogueGroupCharacterHolder CreateHeisterCharacterHolder(EIGS_DialogueHeisterCharacter inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static void ComputeMissionDialoguesVoices(FName inLevelName, FIGS_DialogueGroupCharacterHolder inCharacter, int32& outNoVoiceCount, int32& outTTSVoice, int32& outTrueVoice);
    
    UFUNCTION(BlueprintCallable)
    static void ComputeMetaDialoguesVoices(FName inLevelName, EIGS_MetaDialogueCharacter inCharacter, int32& outNoVoiceCount, int32& outTTSVoice, int32& outTrueVoice);
    
};

