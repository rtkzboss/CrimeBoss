#pragma once
#include "CoreMinimal.h"
#include "IGS_ActorEnvironmentTracker.h"
#include "IGS_WaterVolumeActorTracker.generated.h"

USTRUCT(BlueprintType)
struct FIGS_WaterVolumeActorTracker : public FIGS_ActorEnvironmentTracker {
    GENERATED_BODY()
public:
    BF_FRAMEWORKGAME_API FIGS_WaterVolumeActorTracker();
};

