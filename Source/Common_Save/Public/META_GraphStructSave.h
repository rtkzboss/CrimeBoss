#pragma once
#include "CoreMinimal.h"
#include "EMETA_GraphStatus.h"
#include "META_GraphStructSave.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FMETA_GraphStructSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> Graph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_GraphStatus Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> CurrentNodeIds;
    
    FMETA_GraphStructSave();
};

