#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_BlueprintAsyncActionBase.generated.h"

UCLASS(Blueprintable)
class BF_LEVELGENERATOR_API UIGS_BlueprintAsyncActionBase : public UObject {
    GENERATED_BODY()
public:
    UIGS_BlueprintAsyncActionBase();

    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

