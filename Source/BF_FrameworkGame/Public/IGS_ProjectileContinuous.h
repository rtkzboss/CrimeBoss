#pragma once
#include "CoreMinimal.h"
#include "IGS_ProjectileInstant.h"
#include "IGS_ProjectileContinuous.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_ProjectileContinuous : public AIGS_ProjectileInstant {
    GENERATED_BODY()
public:
    AIGS_ProjectileContinuous(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void DeactivateProjectileProcessing();
    
};

