#pragma once
#include "CoreMinimal.h"
#include "IGS_AIControllerGame.h"
#include "IGS_AIControllerGuard.generated.h"

UCLASS(Blueprintable)
class BF_AI_API AIGS_AIControllerGuard : public AIGS_AIControllerGame {
    GENERATED_BODY()
public:
    AIGS_AIControllerGuard(const FObjectInitializer& ObjectInitializer);

};

