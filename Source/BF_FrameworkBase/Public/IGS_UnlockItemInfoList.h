#pragma once
#include "CoreMinimal.h"
#include "IGS_UnlockItemInfo.h"
#include "IGS_UnlockItemInfoList.generated.h"

USTRUCT(BlueprintType)
struct FIGS_UnlockItemInfoList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_UnlockItemInfo> UnlockItemInfoList;
    
    BF_FRAMEWORKBASE_API FIGS_UnlockItemInfoList();
};

