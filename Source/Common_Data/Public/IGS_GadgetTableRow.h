#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IGS_GadgetData.h"
#include "Templates/SubclassOf.h"
#include "IGS_GadgetTableRow.generated.h"

class UIGS_GadgetInventoryObject;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_GadgetTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_GadgetInventoryObject> ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_GadgetData Data;
    
    FIGS_GadgetTableRow();
};

