#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IGS_GenericItemsData.h"
#include "Templates/SubclassOf.h"
#include "IGS_GenericItemsTableRow.generated.h"

class UIGS_GenericItemsInventoryObject;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_GenericItemsTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_GenericItemsInventoryObject> ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_GenericItemsData Data;
    
    FIGS_GenericItemsTableRow();
};

