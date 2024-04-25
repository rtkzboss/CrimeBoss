#pragma once
#include "CoreMinimal.h"
#include "META_ChangedHeisterAttributeInfo.h"
#include "META_ChangedHeisterAttributeInfoArray.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_ChangedHeisterAttributeInfoArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_ChangedHeisterAttributeInfo> ChangedAttributeArray;
    
    FMETA_ChangedHeisterAttributeInfoArray();
};

