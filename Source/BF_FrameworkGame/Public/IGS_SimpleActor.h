#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_SimpleActor.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_SimpleActor : public AActor {
    GENERATED_BODY()
public:
    AIGS_SimpleActor(const FObjectInitializer& ObjectInitializer);

};

