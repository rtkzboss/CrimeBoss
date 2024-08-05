#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "IGS_BlockingVolume.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_BlockingVolume : public AVolume {
    GENERATED_BODY()
public:
    AIGS_BlockingVolume(const FObjectInitializer& ObjectInitializer);

};

