#pragma once
#include "CoreMinimal.h"
#include "IGS_CareerSlotInfo.generated.h"

USTRUCT(BlueprintType)
struct FIGS_CareerSlotInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CareerSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDebugSaveFile;
    
    COMMON_SAVE_API FIGS_CareerSlotInfo();
};

