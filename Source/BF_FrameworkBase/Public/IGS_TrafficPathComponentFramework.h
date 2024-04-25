#pragma once
#include "CoreMinimal.h"
#include "PFPathComponent.h"
#include "IGS_TrafficPathComponentFramework.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKBASE_API UIGS_TrafficPathComponentFramework : public UPFPathComponent {
    GENERATED_BODY()
public:
    UIGS_TrafficPathComponentFramework(const FObjectInitializer& ObjectInitializer);

};

