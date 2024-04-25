#pragma once
#include "CoreMinimal.h"
#include "IGS_EntitlementItemsManagerBaseComponent.h"
#include "IGS_Quickplay_EntitlementItemsManagerComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_Quickplay_EntitlementItemsManagerComponent : public UIGS_EntitlementItemsManagerBaseComponent {
    GENERATED_BODY()
public:
    UIGS_Quickplay_EntitlementItemsManagerComponent(const FObjectInitializer& ObjectInitializer);

};

