#pragma once
#include "CoreMinimal.h"
#include "IGS_ProjectileWithMovementWithEffect.h"
#include "IGS_SimpleProjectile.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_SimpleProjectile : public AIGS_ProjectileWithMovementWithEffect {
    GENERATED_BODY()
public:
    AIGS_SimpleProjectile(const FObjectInitializer& ObjectInitializer);

};

