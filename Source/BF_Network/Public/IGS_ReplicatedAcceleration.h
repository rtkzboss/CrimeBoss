#pragma once
#include "CoreMinimal.h"
#include "IGS_ReplicatedAcceleration.generated.h"

USTRUCT(BlueprintType)
struct FIGS_ReplicatedAcceleration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AccelXYRadians;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AccelXYMagnitude;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 AccelZ;
    
    BF_NETWORK_API FIGS_ReplicatedAcceleration();
};

