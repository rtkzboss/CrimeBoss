#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPoleVectorModeEnum.h"
#include "PowerIKPoleVector.generated.h"

USTRUCT(BlueprintType)
struct POWERIKRUNTIME_API FPowerIKPoleVector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPoleVectorModeEnum> Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleOffset;
    
    FPowerIKPoleVector();
};

