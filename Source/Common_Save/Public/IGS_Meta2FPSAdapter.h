#pragma once
#include "CoreMinimal.h"
#include "CommonHeisterData.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "IGS_Meta2FPS_Data.h"
#include "IGS_SharedMetaTransfer_Data.h"
#include "IGS_Meta2FPSAdapter.generated.h"

class UMETA_Character;
class UObject;

UCLASS(Blueprintable)
class COMMON_SAVE_API UIGS_Meta2FPSAdapter : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_Meta2FPSAdapter();

    UFUNCTION(BlueprintCallable)
    static void TransferDataToFPS(const UObject* inWCO, FIGS_SharedMetaTransfer_Data inSharedData, FIGS_Meta2FPS_Data InMetaData);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FCommonHeisterData> ConvertMetaCharactersToFPS(const UObject* inWCO, UPARAM(Ref) TArray<UMETA_Character*>& inMetaCharacters);
    
};

