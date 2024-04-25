#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IGS_ImpactItem.h"
#include "IGS_ImpactTableRow.generated.h"

class UPhysicalMaterial;

USTRUCT(BlueprintType)
struct BF_IMPACTS_API FIGS_ImpactTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* PhysicalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ImpactItem FallBackItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_ImpactItem> ImpactItem;
    
    FIGS_ImpactTableRow();
};

