#pragma once
#include "CoreMinimal.h"
#include "IGS_BreakableWindowComponent.h"
#include "IGS_MultiBreakableComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_MultiBreakableComponent : public UIGS_BreakableWindowComponent {
    GENERATED_BODY()
public:
    UIGS_MultiBreakableComponent(const FObjectInitializer& ObjectInitializer);

};

