#pragma once
#include "CoreMinimal.h"
#include "IGS_AIControllerGame.h"
#include "IGS_AIControllerAmbientLife.generated.h"

UCLASS(Blueprintable)
class BF_AI_API AIGS_AIControllerAmbientLife : public AIGS_AIControllerGame {
    GENERATED_BODY()
public:
    AIGS_AIControllerAmbientLife(const FObjectInitializer& ObjectInitializer);

};

