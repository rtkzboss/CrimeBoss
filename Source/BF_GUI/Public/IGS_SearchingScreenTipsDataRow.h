#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IGS_SearchingScreenTipsDataRow.generated.h"

USTRUCT(BlueprintType)
struct FIGS_SearchingScreenTipsDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Tip;
    
    BF_GUI_API FIGS_SearchingScreenTipsDataRow();
};

