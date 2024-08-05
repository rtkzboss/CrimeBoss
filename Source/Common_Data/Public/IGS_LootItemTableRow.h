#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IGS_LootItemsData.h"
#include "Templates/SubclassOf.h"
#include "IGS_LootItemTableRow.generated.h"

class UIGS_LootItemInventoryObject;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_LootItemTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_LootItemInventoryObject> ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_LootItemsData Data;
    
    FIGS_LootItemTableRow();
};

