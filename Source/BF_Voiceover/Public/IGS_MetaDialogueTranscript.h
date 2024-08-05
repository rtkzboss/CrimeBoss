#pragma once
#include "CoreMinimal.h"
#include "EIGS_MetaCutsceneCharacterPose.h"
#include "EIGS_MetaDialogueCharacterSlot.h"
#include "IGS_MetaDialogueTranscript.generated.h"

USTRUCT(BlueprintType)
struct BF_VOICEOVER_API FIGS_MetaDialogueTranscript {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_MetaDialogueCharacterSlot SpeakerSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_MetaDialogueCharacterSlot, EIGS_MetaCutsceneCharacterPose> CharactersPose;
    
    FIGS_MetaDialogueTranscript();
};

