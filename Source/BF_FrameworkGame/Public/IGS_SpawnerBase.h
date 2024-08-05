#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_SpawnerBase.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_SpawnerBase : public AActor {
    GENERATED_BODY()
public:
    AIGS_SpawnerBase(const FObjectInitializer& ObjectInitializer);

};

