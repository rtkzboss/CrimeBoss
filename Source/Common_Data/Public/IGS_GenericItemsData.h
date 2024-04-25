#pragma once
#include "CoreMinimal.h"
#include "EIGS_ItemWeight.h"
#include "IGS_CommonItemData.h"
#include "IGS_GenericItemsData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_GenericItemsData : public FIGS_CommonItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_ItemWeight ItemWeight;
    
    FIGS_GenericItemsData();
};

