#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "IGS_AIVisionBlockingVolume.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_AIVisionBlockingVolume : public AVolume {
    GENERATED_BODY()
public:
    AIGS_AIVisionBlockingVolume(const FObjectInitializer& ObjectInitializer);

};

