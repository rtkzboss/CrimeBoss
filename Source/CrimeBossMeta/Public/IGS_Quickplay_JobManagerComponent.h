#pragma once
#include "CoreMinimal.h"
#include "IGS_JobManagerBaseComponent.h"
#include "IGS_Quickplay_JobManagerComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_Quickplay_JobManagerComponent : public UIGS_JobManagerBaseComponent {
    GENERATED_BODY()
public:
    UIGS_Quickplay_JobManagerComponent(const FObjectInitializer& ObjectInitializer);

};

