#pragma once
#include "CoreMinimal.h"
#include "IGS_PlayerManagerBaseComponent.h"
#include "IGS_Quickplay_PlayerManagerComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_Quickplay_PlayerManagerComponent : public UIGS_PlayerManagerBaseComponent {
    GENERATED_BODY()
public:
    UIGS_Quickplay_PlayerManagerComponent(const FObjectInitializer& ObjectInitializer);

};

