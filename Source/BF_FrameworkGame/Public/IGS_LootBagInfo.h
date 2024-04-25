#pragma once
#include "CoreMinimal.h"
#include "IGS_LootBagInfo.generated.h"

class UIGS_InventoryObjectFramework;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_LootBagInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UIGS_InventoryObjectFramework*> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ItemIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOverfilled;
    
    FIGS_LootBagInfo();
};

