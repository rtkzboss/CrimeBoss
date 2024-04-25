#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "IGS_VolumeBase.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_VolumeBase : public AVolume {
    GENERATED_BODY()
public:
    AIGS_VolumeBase(const FObjectInitializer& ObjectInitializer);

};

