#pragma once
#include "CoreMinimal.h"
#include "IGS_NavLinkComponentBase.h"
#include "IGS_NavLinkWalkThroughComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_NavLinkWalkThroughComponent : public UIGS_NavLinkComponentBase {
    GENERATED_BODY()
public:
    UIGS_NavLinkWalkThroughComponent(const FObjectInitializer& ObjectInitializer);

};

