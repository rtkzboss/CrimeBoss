#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IGS_ThrowableData.h"
#include "Templates/SubclassOf.h"
#include "IGS_ThrowableTableRow.generated.h"

class UIGS_ThrowableInventoryObject;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_ThrowableTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_ThrowableInventoryObject> ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ThrowableData Data;
    
    FIGS_ThrowableTableRow();
};

