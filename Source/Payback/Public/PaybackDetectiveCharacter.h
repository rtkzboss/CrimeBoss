#pragma once
#include "CoreMinimal.h"
#include "PaybackAICharacter.h"
#include "PaybackDetectiveCharacter.generated.h"

UCLASS(Blueprintable)
class PAYBACK_API APaybackDetectiveCharacter : public APaybackAICharacter {
    GENERATED_BODY()
public:
    APaybackDetectiveCharacter(const FObjectInitializer& ObjectInitializer);

};

