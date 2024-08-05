#pragma once
#include "CoreMinimal.h"
#include "EIGS_MetaDialogueCharacter.h"
#include "IGS_MetaCutsceneCharacterSetup.generated.h"

class AIGS_CharacterPaperDoll;

USTRUCT(BlueprintType)
struct PAYBACK_API FIGS_MetaCutsceneCharacterSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_MetaDialogueCharacter DialogueCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AIGS_CharacterPaperDoll> CustomCharacter;
    
    FIGS_MetaCutsceneCharacterSetup();
};

