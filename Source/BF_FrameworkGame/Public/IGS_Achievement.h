#pragma once
#include "CoreMinimal.h"
#include "IGS_Achievement.generated.h"

USTRUCT(BlueprintType)
struct FIGS_Achievement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentValue;
    
    BF_FRAMEWORKGAME_API FIGS_Achievement();
};

