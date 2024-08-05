#pragma once
#include "CoreMinimal.h"
#include "META_StartingBossPerks.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_StartingBossPerks {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AdditionalPerkAmount;
    
    FMETA_StartingBossPerks();
};

