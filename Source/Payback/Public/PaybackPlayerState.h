#pragma once
#include "CoreMinimal.h"
#include "IGS_PlayerStateGame.h"
#include "PaybackPlayerState.generated.h"

UCLASS(Blueprintable)
class PAYBACK_API APaybackPlayerState : public AIGS_PlayerStateGame {
    GENERATED_BODY()
public:
    APaybackPlayerState(const FObjectInitializer& ObjectInitializer);

};

