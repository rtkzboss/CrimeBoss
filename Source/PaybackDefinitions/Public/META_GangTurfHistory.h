#pragma once
#include "CoreMinimal.h"
#include "EMETA_Gang.h"
#include "META_GangTurfHistory.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_GangTurfHistory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_Gang, int32> CapturedTerritory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_Gang, int32> LostTerritory;
    
    FMETA_GangTurfHistory();
};

