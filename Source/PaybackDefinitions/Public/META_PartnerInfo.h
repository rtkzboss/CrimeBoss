#pragma once
#include "CoreMinimal.h"
#include "META_PartnerInfo.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_PartnerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Cash;
    
    FMETA_PartnerInfo();
};

