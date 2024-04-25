#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IGS_MetaCutsceneDataRow.generated.h"

class UIGS_MetaCutsceneDataAsset;

USTRUCT(BlueprintType)
struct PAYBACK_API FIGS_MetaCutsceneDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UIGS_MetaCutsceneDataAsset> CutsceneData;
    
    FIGS_MetaCutsceneDataRow();
};

