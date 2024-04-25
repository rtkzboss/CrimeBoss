#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "META_JobLootItem.generated.h"

class UIGS_LootItemInventoryObject;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_JobLootItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_LootItemInventoryObject> Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResultCount;
    
    FMETA_JobLootItem();
};

