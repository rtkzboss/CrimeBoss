#pragma once
#include "CoreMinimal.h"
#include "IGS_AIControllerAmbientLife.h"
#include "IGS_AIControllerEmpolyee.generated.h"

UCLASS(Blueprintable)
class BF_AI_API AIGS_AIControllerEmpolyee : public AIGS_AIControllerAmbientLife {
    GENERATED_BODY()
public:
    AIGS_AIControllerEmpolyee(const FObjectInitializer& ObjectInitializer);

};

