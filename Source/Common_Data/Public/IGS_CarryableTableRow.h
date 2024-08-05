#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IGS_CarryableData.h"
#include "Templates/SubclassOf.h"
#include "IGS_CarryableTableRow.generated.h"

class UIGS_CarryableInventoryObject;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_CarryableTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_CarryableInventoryObject> ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_CarryableData Data;
    
    FIGS_CarryableTableRow();
};

