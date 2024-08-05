#pragma once
#include "CoreMinimal.h"
#include "EIGS_DialogueHeisterCharacter.h"
#include "IGS_EthnicityVoiceArray.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_EthnicityVoiceArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EIGS_DialogueHeisterCharacter> EthnicityVoiceArray;
    
    FIGS_EthnicityVoiceArray();
};

