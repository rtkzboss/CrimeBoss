#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BTTask_ReactToOffenceAmbient.h"
#include "BTTask_AmbientInspect.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTTask_AmbientInspect : public UBTTask_ReactToOffenceAmbient {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval Duration;
    
public:
    UBTTask_AmbientInspect();

};

