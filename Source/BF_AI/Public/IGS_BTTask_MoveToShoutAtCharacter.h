#pragma once
#include "CoreMinimal.h"
#include "BTTask_MoveToWithRepath.h"
#include "IGS_BTTask_MoveToShoutAtCharacter.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTTask_MoveToShoutAtCharacter : public UBTTask_MoveToWithRepath {
    GENERATED_BODY()
public:
    UIGS_BTTask_MoveToShoutAtCharacter();

};

