#pragma once
#include "CoreMinimal.h"
#include "IGS_AIControllerGame.h"
#include "IGS_AIControllerSwat.generated.h"

UCLASS(Blueprintable)
class BF_AI_API AIGS_AIControllerSwat : public AIGS_AIControllerGame {
    GENERATED_BODY()
public:
    AIGS_AIControllerSwat(const FObjectInitializer& ObjectInitializer);

};

