#pragma once
#include "CoreMinimal.h"
#include "IGS_AIControllerGame.h"
#include "IGS_AIControllerShielder.generated.h"

UCLASS(Blueprintable)
class BF_AI_API AIGS_AIControllerShielder : public AIGS_AIControllerGame {
    GENERATED_BODY()
public:
    AIGS_AIControllerShielder(const FObjectInitializer& ObjectInitializer);

};

