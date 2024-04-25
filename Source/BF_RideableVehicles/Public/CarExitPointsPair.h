#pragma once
#include "CoreMinimal.h"
#include "CarExitPointsPair.generated.h"

USTRUCT(BlueprintType)
struct FCarExitPointsPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Right;
    
    BF_RIDEABLEVEHICLES_API FCarExitPointsPair();
};

