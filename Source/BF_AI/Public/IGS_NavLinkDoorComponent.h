#pragma once
#include "CoreMinimal.h"
#include "IGS_NavLinkComponent.h"
#include "IGS_NavLinkDoorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_NavLinkDoorComponent : public UIGS_NavLinkComponent {
    GENERATED_BODY()
public:
    UIGS_NavLinkDoorComponent(const FObjectInitializer& ObjectInitializer);

};

