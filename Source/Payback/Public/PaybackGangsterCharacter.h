#pragma once
#include "CoreMinimal.h"
#include "PaybackAICharacter.h"
#include "PaybackGangsterCharacter.generated.h"

UCLASS(Blueprintable)
class PAYBACK_API APaybackGangsterCharacter : public APaybackAICharacter {
    GENERATED_BODY()
public:
    APaybackGangsterCharacter(const FObjectInitializer& ObjectInitializer);

};

