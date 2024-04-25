#pragma once
#include "CoreMinimal.h"
#include "IGS_AIEnemyGroupSpawner.h"
#include "IGS_AIEnemyGroupSpawnerVIP.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_AIEnemyGroupSpawnerVIP : public AIGS_AIEnemyGroupSpawner {
    GENERATED_BODY()
public:
    AIGS_AIEnemyGroupSpawnerVIP(const FObjectInitializer& ObjectInitializer);

};

