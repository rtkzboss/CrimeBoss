#pragma once
#include "CoreMinimal.h"
#include "IGS_AIControllerAmbientLife.h"
#include "IGS_AIControllerCivilian.generated.h"

UCLASS(Blueprintable)
class BF_AI_API AIGS_AIControllerCivilian : public AIGS_AIControllerAmbientLife {
    GENERATED_BODY()
public:
    AIGS_AIControllerCivilian(const FObjectInitializer& ObjectInitializer);

};

