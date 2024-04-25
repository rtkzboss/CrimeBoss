#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IGS_DebugSystemInterface.generated.h"

UINTERFACE(Blueprintable)
class BF_DEBUG_API UIGS_DebugSystemInterface : public UInterface {
    GENERATED_BODY()
};

class BF_DEBUG_API IIGS_DebugSystemInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugToggleSessionInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugTogglePressureGraph();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugToggleMovementSpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugToggleDynamicCrosshair();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugThrow(int32 inThrowableTableRowNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugPlayer3PVWithFPPArmsView();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugPlayer3PVView();
    
};

