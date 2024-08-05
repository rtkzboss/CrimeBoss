#pragma once
#include "CoreMinimal.h"
#include "EMETA_TaskStatus.h"
#include "META_TaskInfoSave.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FMETA_TaskInfoSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_TaskStatus Status;
    
    FMETA_TaskInfoSave();
};

