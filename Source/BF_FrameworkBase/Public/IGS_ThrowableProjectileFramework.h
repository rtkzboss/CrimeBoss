#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_ThrowableProjectileFramework.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API AIGS_ThrowableProjectileFramework : public AActor {
    GENERATED_BODY()
public:
    AIGS_ThrowableProjectileFramework(const FObjectInitializer& ObjectInitializer);

};

