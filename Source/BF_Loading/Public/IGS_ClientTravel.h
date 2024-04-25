#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "IGS_ClientTravel.generated.h"

class UIGS_ClientTravel;
class UObject;

UCLASS(Blueprintable)
class BF_LOADING_API UIGS_ClientTravel : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UIGS_ClientTravel();

    UFUNCTION(BlueprintCallable)
    static UIGS_ClientTravel* ClientTravel(UObject* inWCO, FName inLevelName);
    
};

