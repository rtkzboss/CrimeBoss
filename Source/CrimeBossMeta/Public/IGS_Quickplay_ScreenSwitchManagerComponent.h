#pragma once
#include "CoreMinimal.h"
#include "IGS_ScreenSwitchManagerBaseComponent.h"
#include "IGS_Quickplay_ScreenSwitchManagerComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_Quickplay_ScreenSwitchManagerComponent : public UIGS_ScreenSwitchManagerBaseComponent {
    GENERATED_BODY()
public:
    UIGS_Quickplay_ScreenSwitchManagerComponent(const FObjectInitializer& ObjectInitializer);

};

