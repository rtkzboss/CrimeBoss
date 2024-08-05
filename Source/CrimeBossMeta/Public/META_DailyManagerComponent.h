#pragma once
#include "CoreMinimal.h"
#include "IGS_DailyManagerBaseComponent.h"
#include "META_DailyManagerComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UMETA_DailyManagerComponent : public UIGS_DailyManagerBaseComponent {
    GENERATED_BODY()
public:
    UMETA_DailyManagerComponent(const FObjectInitializer& ObjectInitializer);

};

