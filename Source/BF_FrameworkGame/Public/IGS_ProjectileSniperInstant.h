#pragma once
#include "CoreMinimal.h"
#include "IGS_ProjectileInstant.h"
#include "IGS_ProjectileSniperInstant.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_ProjectileSniperInstant : public AIGS_ProjectileInstant {
    GENERATED_BODY()
public:
    AIGS_ProjectileSniperInstant(const FObjectInitializer& ObjectInitializer);

};

