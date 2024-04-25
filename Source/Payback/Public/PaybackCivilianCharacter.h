#pragma once
#include "CoreMinimal.h"
#include "PaybackAICharacter.h"
#include "PaybackCivilianCharacter.generated.h"

UCLASS(Blueprintable)
class PAYBACK_API APaybackCivilianCharacter : public APaybackAICharacter {
    GENERATED_BODY()
public:
    APaybackCivilianCharacter(const FObjectInitializer& ObjectInitializer);

};

