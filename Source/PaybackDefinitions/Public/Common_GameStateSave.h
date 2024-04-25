#pragma once
#include "CoreMinimal.h"
#include "Common_GameStateSave.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FCommon_GameStateSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HeatAmount;
    
    FCommon_GameStateSave();
};

