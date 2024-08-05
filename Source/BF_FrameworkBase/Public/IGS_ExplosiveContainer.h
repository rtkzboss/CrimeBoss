#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_ExplosiveContainer.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API AIGS_ExplosiveContainer : public AActor {
    GENERATED_BODY()
public:
    AIGS_ExplosiveContainer(const FObjectInitializer& ObjectInitializer);

};

