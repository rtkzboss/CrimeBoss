#pragma once
#include "CoreMinimal.h"
#include "IGS_AIControllerGame.h"
#include "IGS_AIControllerBooster_Base.generated.h"

UCLASS(Blueprintable)
class BF_AI_API AIGS_AIControllerBooster_Base : public AIGS_AIControllerGame {
    GENERATED_BODY()
public:
    AIGS_AIControllerBooster_Base(const FObjectInitializer& ObjectInitializer);

};

