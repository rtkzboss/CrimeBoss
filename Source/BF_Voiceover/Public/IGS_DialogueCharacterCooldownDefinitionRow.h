#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EIGS_DialogueCharacterCooldown.h"
#include "IGS_DialogueCharacterCooldownDefinitionRow.generated.h"

USTRUCT(BlueprintType)
struct BF_VOICEOVER_API FIGS_DialogueCharacterCooldownDefinitionRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_DialogueCharacterCooldown ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownSeconds;
    
    FIGS_DialogueCharacterCooldownDefinitionRow();
};

