#pragma once
#include "CoreMinimal.h"
#include "PaybackAICharacter.h"
#include "PaybackSWATCharacter.generated.h"

UCLASS(Blueprintable)
class PAYBACK_API APaybackSWATCharacter : public APaybackAICharacter {
    GENERATED_BODY()
public:
    APaybackSWATCharacter(const FObjectInitializer& ObjectInitializer);

};

