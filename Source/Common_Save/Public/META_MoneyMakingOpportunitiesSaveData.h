#pragma once
#include "CoreMinimal.h"
#include "META_MoneyMakingOpportunitiesSaveData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FMETA_MoneyMakingOpportunitiesSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 StartDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 FinishDay;
    
    FMETA_MoneyMakingOpportunitiesSaveData();
};

