#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "META_UIEventsManager.h"
#include "IGS_UIEventsManagerBaseComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_UIEventsManagerBaseComponent : public UActorComponent, public IMETA_UIEventsManager {
    GENERATED_BODY()
public:
    UIGS_UIEventsManagerBaseComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

