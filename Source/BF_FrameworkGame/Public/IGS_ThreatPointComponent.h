#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_ThreatPointComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_ThreatPointComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_ThreatPointComponent(const FObjectInitializer& ObjectInitializer);

};

