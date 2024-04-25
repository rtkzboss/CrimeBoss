#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "IGS_BlackboardGameComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_BlackboardGameComponent : public UBlackboardComponent {
    GENERATED_BODY()
public:
    UIGS_BlackboardGameComponent(const FObjectInitializer& ObjectInitializer);

};

