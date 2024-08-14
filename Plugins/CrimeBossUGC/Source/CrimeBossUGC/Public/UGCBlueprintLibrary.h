#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UGCBlueprintLibrary.generated.h"

class UObject;
class UUGCRegistry;

UCLASS(Blueprintable)
class CRIMEBOSSUGC_API UUGCBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUGCBlueprintLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext=WorldContextObject))
    static UUGCRegistry* GetUGCRegistry(UObject* WorldContextObject);
    
};

