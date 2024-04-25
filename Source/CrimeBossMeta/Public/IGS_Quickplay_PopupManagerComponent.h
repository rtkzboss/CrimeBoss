#pragma once
#include "CoreMinimal.h"
#include "IGS_PopupManagerBaseComponent.h"
#include "IGS_Quickplay_PopupManagerComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_Quickplay_PopupManagerComponent : public UIGS_PopupManagerBaseComponent {
    GENERATED_BODY()
public:
    UIGS_Quickplay_PopupManagerComponent(const FObjectInitializer& ObjectInitializer);

};

