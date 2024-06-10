#pragma once
#include "CoreMinimal.h"
#include "IGS_UnlockPanelUIData.generated.h"

USTRUCT(BlueprintType)
struct CRIMEBOSSMETA_API FIGS_UnlockPanelUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    FIGS_UnlockPanelUIData();
};

