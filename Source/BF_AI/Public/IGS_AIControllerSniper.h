#pragma once
#include "CoreMinimal.h"
#include "IGS_AIControllerGame.h"
#include "IGS_AIControllerSniper.generated.h"

UCLASS(Blueprintable)
class BF_AI_API AIGS_AIControllerSniper : public AIGS_AIControllerGame {
    GENERATED_BODY()
public:
    AIGS_AIControllerSniper(const FObjectInitializer& ObjectInitializer);

};

