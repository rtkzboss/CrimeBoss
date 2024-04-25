#pragma once
#include "CoreMinimal.h"
#include "IGS_UnlockManagerBaseComponent.h"
#include "IGS_Quickplay_UnlockManagerComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_Quickplay_UnlockManagerComponent : public UIGS_UnlockManagerBaseComponent {
    GENERATED_BODY()
public:
    UIGS_Quickplay_UnlockManagerComponent(const FObjectInitializer& ObjectInitializer);

};

