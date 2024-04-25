#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_PopupManagerBaseComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_PopupManagerBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_PopupManagerBaseComponent(const FObjectInitializer& ObjectInitializer);

};

