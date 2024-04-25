#pragma once
#include "CoreMinimal.h"
#include "IGS_ItemStatGUIHolder.generated.h"

USTRUCT(BlueprintType)
struct FIGS_ItemStatGUIHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText StatName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText StatValue;
    
    BF_GUI_API FIGS_ItemStatGUIHolder();
};

