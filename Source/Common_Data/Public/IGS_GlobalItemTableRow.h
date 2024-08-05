#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IGS_GlobalItemsData.h"
#include "Templates/SubclassOf.h"
#include "IGS_GlobalItemTableRow.generated.h"

class UIGS_GlobalInventoryObject;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_GlobalItemTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_GlobalInventoryObject> ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_GlobalItemsData Data;
    
    FIGS_GlobalItemTableRow();
};

