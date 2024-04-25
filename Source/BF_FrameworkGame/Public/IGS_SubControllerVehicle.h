#pragma once
#include "CoreMinimal.h"
#include "IGS_SubControllerCommon.h"
#include "IGS_SubControllerVehicle.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_SubControllerVehicle : public UIGS_SubControllerCommon {
    GENERATED_BODY()
public:
    UIGS_SubControllerVehicle(const FObjectInitializer& ObjectInitializer);

};

