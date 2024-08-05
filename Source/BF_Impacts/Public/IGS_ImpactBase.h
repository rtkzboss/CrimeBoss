#pragma once
#include "CoreMinimal.h"
#include "IGS_PoolableInterface.h"
#include "GameFramework/Actor.h"
#include "IGS_ImpactBase.generated.h"

UCLASS(Blueprintable)
class BF_IMPACTS_API AIGS_ImpactBase : public AActor, public IIGS_PoolableInterface {
    GENERATED_BODY()
public:
    AIGS_ImpactBase(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

