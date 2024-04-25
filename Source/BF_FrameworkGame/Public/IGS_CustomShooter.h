#pragma once
#include "CoreMinimal.h"
#include "IGS_ShooterBase.h"
#include "IGS_CustomShooter.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_CustomShooter : public UIGS_ShooterBase {
    GENERATED_BODY()
public:
    UIGS_CustomShooter(const FObjectInitializer& ObjectInitializer);

};

