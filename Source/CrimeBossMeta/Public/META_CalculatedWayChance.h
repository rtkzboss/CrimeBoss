#pragma once
#include "CoreMinimal.h"
#include "META_CalculatedWayChance.generated.h"

USTRUCT(BlueprintType)
struct FMETA_CalculatedWayChance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NodeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LeftValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RightValue;
    
    CRIMEBOSSMETA_API FMETA_CalculatedWayChance();
};

