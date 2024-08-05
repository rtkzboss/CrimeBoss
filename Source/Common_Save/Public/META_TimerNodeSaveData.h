#pragma once
#include "CoreMinimal.h"
#include "META_TimerNodeSaveData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FMETA_TimerNodeSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartingDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResultValue;
    
    FMETA_TimerNodeSaveData();
};

