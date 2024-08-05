#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "IGS_Meta2FPS_Data.h"
#include "IGS_SharedMetaTransfer_Data.h"
#include "Quickplay2FPSAdapter.generated.h"

class UObject;

UCLASS(Blueprintable)
class COMMON_SAVE_API UQuickplay2FPSAdapter : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UQuickplay2FPSAdapter();

    UFUNCTION(BlueprintCallable)
    static void TransferDataToFPS(const UObject* inWCO, FIGS_SharedMetaTransfer_Data inSharedData, FIGS_Meta2FPS_Data inQuickplayData);
    
};

