#pragma once
#include "CoreMinimal.h"
#include "IGS_MediaManagerBaseComponent.h"
#include "IGS_Quickplay_MediaManagerComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_Quickplay_MediaManagerComponent : public UIGS_MediaManagerBaseComponent {
    GENERATED_BODY()
public:
    UIGS_Quickplay_MediaManagerComponent(const FObjectInitializer& ObjectInitializer);

};

