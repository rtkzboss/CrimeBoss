#pragma once
#include "CoreMinimal.h"
#include "BTTask_PlayDialogue.h"
#include "BTTask_MarkAsTarget.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTTask_MarkAsTarget : public UBTTask_PlayDialogue {
    GENERATED_BODY()
public:
    UBTTask_MarkAsTarget();

};

