#pragma once
#include "CoreMinimal.h"
#include "IGS_AIControllerGame.h"
#include "IGS_AIControllerEngineer_Base.generated.h"

UCLASS(Abstract, Blueprintable)
class BF_AI_API AIGS_AIControllerEngineer_Base : public AIGS_AIControllerGame {
    GENERATED_BODY()
public:
    AIGS_AIControllerEngineer_Base(const FObjectInitializer& ObjectInitializer);

};

