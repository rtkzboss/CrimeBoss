#pragma once
#include "CoreMinimal.h"
#include "EIGS_CharacterID.h"
#include "EMETA_CharacterState.h"
#include "IGS_ChainAction.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_ChainAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_CharacterID CharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_CharacterState CharacterState;
    
    FIGS_ChainAction();
};

