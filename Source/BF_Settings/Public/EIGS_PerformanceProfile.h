#pragma once
#include "CoreMinimal.h"
#include "EIGS_PerformanceProfile.generated.h"

UENUM(BlueprintType)
enum class EIGS_PerformanceProfile : uint8 {
    PP_Custom,
    PP_Low,
    PP_Medium,
    PP_High,
    PP_Epic,
    PP_Cinematic,
    PP_Auto,
};

