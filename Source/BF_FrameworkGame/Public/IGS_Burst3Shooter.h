#pragma once
#include "CoreMinimal.h"
#include "IGS_BurstShooter.h"
#include "IGS_Burst3Shooter.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_Burst3Shooter : public UIGS_BurstShooter {
    GENERATED_BODY()
public:
    UIGS_Burst3Shooter(const FObjectInitializer& ObjectInitializer);

};

