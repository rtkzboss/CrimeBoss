#pragma once
#include "CoreMinimal.h"
#include "BTTask_ReactToOffenceAmbient.h"
#include "BTTask_LayingOnGround.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTTask_LayingOnGround : public UBTTask_ReactToOffenceAmbient {
    GENERATED_BODY()
public:
    UBTTask_LayingOnGround();

};

