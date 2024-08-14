#pragma once
#include "CoreMinimal.h"
#include "CommonHeisterData.h"
#include "EIGS_StorePlatform.h"
#include "IGS_PlayerStateData.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_PlayerStateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonHeisterData HeisterDataHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_StorePlatform StorePlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HordeModeTokens;
    
    FIGS_PlayerStateData();
};

