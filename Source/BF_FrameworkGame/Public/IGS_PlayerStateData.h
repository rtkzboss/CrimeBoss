#pragma once
#include "CoreMinimal.h"
#include "CommonHeisterData.h"
#include "IGS_PlayerStateData.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_PlayerStateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonHeisterData HeisterDataHolder;
    
    FIGS_PlayerStateData();
};

