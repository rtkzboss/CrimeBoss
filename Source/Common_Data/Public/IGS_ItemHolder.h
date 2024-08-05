#pragma once
#include "CoreMinimal.h"
#include "EIGS_ItemType.h"
#include "IGS_ItemHolder.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_ItemHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_ItemType ItemType;
    
    FIGS_ItemHolder();
};

