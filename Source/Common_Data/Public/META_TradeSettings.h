#pragma once
#include "CoreMinimal.h"
#include "META_TradeSettings.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_TradeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinMonetaryTradeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxMonetaryTradeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DailyLimitMonetaryTradeValueForPawnShop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseInvestigationValueAfterExceededPawnShopLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxInvestigationValueAfterExceededPawnShopLimit;
    
    FMETA_TradeSettings();
};

