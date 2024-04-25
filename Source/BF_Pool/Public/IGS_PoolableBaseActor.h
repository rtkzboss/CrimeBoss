#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_PoolableInterface.h"
#include "IGS_PoolableBaseActor.generated.h"

UCLASS(Blueprintable)
class BF_POOL_API AIGS_PoolableBaseActor : public AActor, public IIGS_PoolableInterface {
    GENERATED_BODY()
public:
    AIGS_PoolableBaseActor(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

