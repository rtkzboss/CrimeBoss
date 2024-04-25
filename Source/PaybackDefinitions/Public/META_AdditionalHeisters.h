#pragma once
#include "CoreMinimal.h"
#include "META_AdditionalHeister.h"
#include "META_AdditionalHeisters.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_AdditionalHeisters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_AdditionalHeister> Heisters;
    
    FMETA_AdditionalHeisters();
};

