#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_SearchPointComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_SearchPointComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_SearchPointComponent(const FObjectInitializer& ObjectInitializer);

};

