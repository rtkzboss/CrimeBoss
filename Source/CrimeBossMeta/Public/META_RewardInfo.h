#pragma once
#include "CoreMinimal.h"
#include "EMETA_ActionCardTheme.h"
#include "META_RewardInfo.generated.h"

USTRUCT(BlueprintType)
struct FMETA_RewardInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_ActionCardTheme Theme;
    
    CRIMEBOSSMETA_API FMETA_RewardInfo();
};

