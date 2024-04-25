#pragma once
#include "CoreMinimal.h"
#include "PaybackAICharacter.h"
#include "PaybackEmployeeCharacter.generated.h"

UCLASS(Blueprintable)
class PAYBACK_API APaybackEmployeeCharacter : public APaybackAICharacter {
    GENERATED_BODY()
public:
    APaybackEmployeeCharacter(const FObjectInitializer& ObjectInitializer);

};

