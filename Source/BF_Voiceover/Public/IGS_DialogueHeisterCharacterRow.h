#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EIGS_DialogueHeisterCharacter.h"
#include "IGS_DialogueCharacterCooldownData.h"
#include "IGS_DialogueHeisterCharacterRow.generated.h"

USTRUCT(BlueprintType)
struct BF_VOICEOVER_API FIGS_DialogueHeisterCharacterRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_DialogueHeisterCharacter ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeechScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_DialogueCharacterCooldownData CooldownData;
    
    FIGS_DialogueHeisterCharacterRow();
};

