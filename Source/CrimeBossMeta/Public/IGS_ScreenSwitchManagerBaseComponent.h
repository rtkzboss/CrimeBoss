#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_ScreenSwitchManagerBaseComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_ScreenSwitchManagerBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_ScreenSwitchManagerBaseComponent(const FObjectInitializer& ObjectInitializer);

};

