#pragma once
#include "CoreMinimal.h"
#include "IGS_HUDData.h"
#include "IGS_HUDTableRow.generated.h"

class AIGS_WieldableBase;

USTRUCT(BlueprintType)
struct BF_GUI_API FIGS_HUDTableRow : public FIGS_HUDData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AIGS_WieldableBase> ID;
    
    FIGS_HUDTableRow();
};

