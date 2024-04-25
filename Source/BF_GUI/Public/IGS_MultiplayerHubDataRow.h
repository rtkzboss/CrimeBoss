#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IGS_MultiplayerHubDataRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FIGS_MultiplayerHubDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> ButtonImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ButtonName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ButtonDescription;
    
    BF_GUI_API FIGS_MultiplayerHubDataRow();
};

