#pragma once
#include "CoreMinimal.h"
#include "IGS_SnipePointData.generated.h"

class AIGS_SnipePoint;

USTRUCT(BlueprintType)
struct BF_AI_API FIGS_SnipePointData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_SnipePoint* SnipePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimAtSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitTime;
    
    FIGS_SnipePointData();
};

