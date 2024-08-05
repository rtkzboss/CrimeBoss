#pragma once
#include "CoreMinimal.h"
#include "EIGS_ItemType.h"
#include "IGS_LootBagSingleItem.h"
#include "IGS_LootBagItemHolder.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_LootBagItemHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_LootBagSingleItem> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_ItemType ItemType;
    
    FIGS_LootBagItemHolder();
};

