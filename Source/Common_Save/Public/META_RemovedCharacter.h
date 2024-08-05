#pragma once
#include "CoreMinimal.h"
#include "META_CharacterID.h"
#include "META_RemovedCharacter.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FMETA_RemovedCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_CharacterID ID;
    
    FMETA_RemovedCharacter();
};

