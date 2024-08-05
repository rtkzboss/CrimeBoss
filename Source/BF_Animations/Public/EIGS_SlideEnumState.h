#pragma once
#include "CoreMinimal.h"
#include "EIGS_SlideEnumState.generated.h"

UENUM(BlueprintType)
enum class EIGS_SlideEnumState : uint8 {
    EBF_Sliding,
    EBF_SlidingTransitionEnd,
    EBF_NotSliding,
};

