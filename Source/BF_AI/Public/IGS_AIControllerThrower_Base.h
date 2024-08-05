#pragma once
#include "CoreMinimal.h"
#include "IGS_AIControllerGame.h"
#include "IGS_AIControllerThrower_Base.generated.h"

UCLASS(Abstract, Blueprintable)
class BF_AI_API AIGS_AIControllerThrower_Base : public AIGS_AIControllerGame {
    GENERATED_BODY()
public:
    AIGS_AIControllerThrower_Base(const FObjectInitializer& ObjectInitializer);

};

