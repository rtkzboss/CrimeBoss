#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_LevelActorsManagerBaseComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_LevelActorsManagerBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_LevelActorsManagerBaseComponent(const FObjectInitializer& ObjectInitializer);

};

