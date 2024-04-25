#pragma once
#include "CoreMinimal.h"
#include "IGS_AISuspiciousnessComponentBase.h"
#include "IGS_AISuspiciousnessComponentCivEmployee.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_AISuspiciousnessComponentCivEmployee : public UIGS_AISuspiciousnessComponentBase {
    GENERATED_BODY()
public:
    UIGS_AISuspiciousnessComponentCivEmployee(const FObjectInitializer& ObjectInitializer);

};

