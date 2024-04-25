#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_SubControllerCommon.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_SubControllerCommon : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_SubControllerCommon(const FObjectInitializer& ObjectInitializer);

};

