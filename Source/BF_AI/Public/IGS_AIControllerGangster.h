#pragma once
#include "CoreMinimal.h"
#include "IGS_AIControllerGame.h"
#include "IGS_AIControllerGangster.generated.h"

UCLASS(Blueprintable)
class BF_AI_API AIGS_AIControllerGangster : public AIGS_AIControllerGame {
    GENERATED_BODY()
public:
    AIGS_AIControllerGangster(const FObjectInitializer& ObjectInitializer);

};

