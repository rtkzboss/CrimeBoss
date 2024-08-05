#pragma once
#include "CoreMinimal.h"
#include "IGS_AIControllerGame.h"
#include "IGS_AIControllerScout_Base.generated.h"

UCLASS(Abstract, Blueprintable)
class BF_AI_API AIGS_AIControllerScout_Base : public AIGS_AIControllerGame {
    GENERATED_BODY()
public:
    AIGS_AIControllerScout_Base(const FObjectInitializer& ObjectInitializer);

};

