#pragma once
#include "CoreMinimal.h"
#include "IGS_InputDeviceIconData.generated.h"

USTRUCT(BlueprintType)
struct BF_INPUT_API FIGS_InputDeviceIconData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ButtonSymbol;
    
    FIGS_InputDeviceIconData();
};

