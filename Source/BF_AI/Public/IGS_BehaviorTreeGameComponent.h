#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "IGS_BehaviorTreeGameComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_BehaviorTreeGameComponent : public UBehaviorTreeComponent {
    GENERATED_BODY()
public:
    UIGS_BehaviorTreeGameComponent(const FObjectInitializer& ObjectInitializer);

};

