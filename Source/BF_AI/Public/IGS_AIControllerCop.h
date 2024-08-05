#pragma once
#include "CoreMinimal.h"
#include "IGS_AIControllerGame.h"
#include "IGS_AIControllerCop.generated.h"

UCLASS(Blueprintable)
class BF_AI_API AIGS_AIControllerCop : public AIGS_AIControllerGame {
    GENERATED_BODY()
public:
    AIGS_AIControllerCop(const FObjectInitializer& ObjectInitializer);

};

