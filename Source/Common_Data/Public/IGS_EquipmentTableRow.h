#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IGS_EquipmentData.h"
#include "Templates/SubclassOf.h"
#include "IGS_EquipmentTableRow.generated.h"

class UIGS_EquipmentInventoryObject;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_EquipmentTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_EquipmentInventoryObject> ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_EquipmentData Data;
    
    FIGS_EquipmentTableRow();
};

