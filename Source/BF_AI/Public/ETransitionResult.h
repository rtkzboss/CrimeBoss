#pragma once
#include "CoreMinimal.h"
#include "ETransitionResult.generated.h"

UENUM(BlueprintType)
enum ETransitionResult {
    TR_None,
    TR_Success,
    TR_Failed,
};

