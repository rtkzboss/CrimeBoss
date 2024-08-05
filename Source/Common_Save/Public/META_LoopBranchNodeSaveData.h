#pragma once
#include "CoreMinimal.h"
#include "META_LoopBranchNodeSaveData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FMETA_LoopBranchNodeSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentAmountOfActivation;
    
    FMETA_LoopBranchNodeSaveData();
};

