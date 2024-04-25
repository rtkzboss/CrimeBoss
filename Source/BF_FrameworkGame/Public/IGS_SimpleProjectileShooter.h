#pragma once
#include "CoreMinimal.h"
#include "IGS_SimpleShooter.h"
#include "IGS_SimpleProjectileShooter.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_SimpleProjectileShooter : public UIGS_SimpleShooter {
    GENERATED_BODY()
public:
    UIGS_SimpleProjectileShooter(const FObjectInitializer& ObjectInitializer);

};

