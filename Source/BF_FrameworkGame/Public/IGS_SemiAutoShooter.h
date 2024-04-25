#pragma once
#include "CoreMinimal.h"
#include "IGS_ShooterBase.h"
#include "IGS_SemiAutoShooter.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_SemiAutoShooter : public UIGS_ShooterBase {
    GENERATED_BODY()
public:
    UIGS_SemiAutoShooter(const FObjectInitializer& ObjectInitializer);

};

