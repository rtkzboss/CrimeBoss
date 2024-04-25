#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IGS_HUDData.generated.h"

class UTexture;
class UTexture2D;

USTRUCT(BlueprintType)
struct BF_GUI_API FIGS_HUDData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WieldableName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture> WieldableIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> WieldableHUDIcon;
    
    FIGS_HUDData();
};

