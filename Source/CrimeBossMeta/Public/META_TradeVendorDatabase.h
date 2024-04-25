#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EMETA_TradeVendor.h"
#include "META_TradeVendorTableRow.h"
#include "META_TradeVendorDatabase.generated.h"

class UObject;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UMETA_TradeVendorDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UMETA_TradeVendorDatabase();

    UFUNCTION(BlueprintCallable)
    static FMETA_TradeVendorTableRow GetTradeVendorData(UObject* inWCO, const EMETA_TradeVendor inTradeVendor, bool& outSucceeded);
    
};

