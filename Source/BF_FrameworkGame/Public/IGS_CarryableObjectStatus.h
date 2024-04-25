#pragma once
#include "CoreMinimal.h"
#include "IGS_ObjectStatus.h"
#include "IGS_CarryableObjectStatus.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_CarryableObjectStatus : public UIGS_ObjectStatus {
    GENERATED_BODY()
public:
    UIGS_CarryableObjectStatus(const FObjectInitializer& ObjectInitializer);

};

