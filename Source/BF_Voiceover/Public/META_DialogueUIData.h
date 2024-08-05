#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EIGS_MetaDialogueCharacter.h"
#include "EIGS_MetaDialogueCharacterSlot.h"
#include "META_DialogueUIData.generated.h"

USTRUCT(BlueprintType)
struct BF_VOICEOVER_API FMETA_DialogueUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_MetaDialogueCharacterSlot, EIGS_MetaDialogueCharacter> Characters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag screenTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TypeTag;
    
    FMETA_DialogueUIData();
};

