#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_UGCModBase.generated.h"

class UWorld;

UCLASS(Abstract, Blueprintable)
class SIMPLEUGC_API UIGS_UGCModBase : public UObject {
    GENERATED_BODY()
public:
    UIGS_UGCModBase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWorld* GetGameWorld() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ApplyUGCMod();
    
};

