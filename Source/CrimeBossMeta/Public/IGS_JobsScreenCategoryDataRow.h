#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IGS_JobsScreenCategoryColumn.h"
#include "IGS_JobsScreenCategoryDataRow.generated.h"

USTRUCT(BlueprintType)
struct FIGS_JobsScreenCategoryDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_JobsScreenCategoryColumn> Columns;
    
    CRIMEBOSSMETA_API FIGS_JobsScreenCategoryDataRow();
};

