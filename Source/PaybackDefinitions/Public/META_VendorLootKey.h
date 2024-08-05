#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_TradeVendor.h"
#include "META_VendorLootKey.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_VendorLootKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_TradeVendor Vendor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Loot;
    
    FMETA_VendorLootKey();
};
FORCEINLINE uint32 GetTypeHash(const FMETA_VendorLootKey) { return 0; }

