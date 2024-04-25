#pragma once
#include "CoreMinimal.h"
#include "IGS_AIControllerGame.h"
#include "IGS_AIControllerHeistersBackup.generated.h"

UCLASS(Blueprintable)
class BF_AI_API AIGS_AIControllerHeistersBackup : public AIGS_AIControllerGame {
    GENERATED_BODY()
public:
    AIGS_AIControllerHeistersBackup(const FObjectInitializer& ObjectInitializer);

};

