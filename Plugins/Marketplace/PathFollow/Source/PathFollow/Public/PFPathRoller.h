#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PFPathRoller.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct PATHFOLLOW_API FPFPathRoller {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterpCurveVector _rollAnglesCurve;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> _curves;
    
public:
    FPFPathRoller();
};

