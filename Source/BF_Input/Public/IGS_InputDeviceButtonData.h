#pragma once
#include "CoreMinimal.h"
#include "IGS_InputDeviceButtonData.generated.h"

USTRUCT(BlueprintType)
struct BF_INPUT_API FIGS_InputDeviceButtonData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ButtonSymbol;
    
    FIGS_InputDeviceButtonData();
};

