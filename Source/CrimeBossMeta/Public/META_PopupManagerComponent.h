#pragma once
#include "CoreMinimal.h"
#include "IGS_PopupManagerBaseComponent.h"
#include "META_PopupManagerComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UMETA_PopupManagerComponent : public UIGS_PopupManagerBaseComponent {
    GENERATED_BODY()
public:
    UMETA_PopupManagerComponent(const FObjectInitializer& ObjectInitializer);

};

