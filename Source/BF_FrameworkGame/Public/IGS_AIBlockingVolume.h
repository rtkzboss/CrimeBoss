#pragma once
#include "CoreMinimal.h"
#include "NavModifierVolume.h"
#include "IGS_AIBlockingVolume.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_AIBlockingVolume : public ANavModifierVolume {
    GENERATED_BODY()
public:
    AIGS_AIBlockingVolume(const FObjectInitializer& ObjectInitializer);

};

