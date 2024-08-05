#pragma once
#include "CoreMinimal.h"
#include "Components/ChildActorComponent.h"
#include "IGS_AuthoritativeChildActorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKBASE_API UIGS_AuthoritativeChildActorComponent : public UChildActorComponent {
    GENERATED_BODY()
public:
    UIGS_AuthoritativeChildActorComponent(const FObjectInitializer& ObjectInitializer);

};

