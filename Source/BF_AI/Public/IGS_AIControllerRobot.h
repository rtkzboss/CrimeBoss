#pragma once
#include "CoreMinimal.h"
#include "IGS_AIControllerGame.h"
#include "IGS_AIControllerRobot.generated.h"

UCLASS(Blueprintable)
class BF_AI_API AIGS_AIControllerRobot : public AIGS_AIControllerGame {
    GENERATED_BODY()
public:
    AIGS_AIControllerRobot(const FObjectInitializer& ObjectInitializer);

};

