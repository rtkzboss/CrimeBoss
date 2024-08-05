#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "VirtualCursorTarget.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UVirtualCursorTarget : public UInterface {
    GENERATED_BODY()
};

class IVirtualCursorTarget : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectByVirtualCursor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndVirtualCursorOver();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginVirtualCursorOver();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector GetTargetLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DeselectByVirtualCursor();
    
};

