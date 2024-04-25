#pragma once
#include "CoreMinimal.h"
#include "IGS_GASComponentBase.h"
#include "IGS_GlobalGASComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKBASE_API UIGS_GlobalGASComponent : public UIGS_GASComponentBase {
    GENERATED_BODY()
public:
    UIGS_GlobalGASComponent(const FObjectInitializer& ObjectInitializer);

};

