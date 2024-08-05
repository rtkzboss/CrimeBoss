#pragma once
#include "CoreMinimal.h"
#include "IGS_ScriptableBehaviorComponent.h"
#include "IGS_ScriptableBehaviorComponentBot.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_ScriptableBehaviorComponentBot : public UIGS_ScriptableBehaviorComponent {
    GENERATED_BODY()
public:
    UIGS_ScriptableBehaviorComponentBot(const FObjectInitializer& ObjectInitializer);

};

