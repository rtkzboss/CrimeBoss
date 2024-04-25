#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "IGS_GameplayRenderingSubsystem.generated.h"

UCLASS(Blueprintable)
class BF_RENDERING_API UIGS_GameplayRenderingSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UIGS_GameplayRenderingSubsystem();

    UFUNCTION(BlueprintCallable)
    void ToggleToFPV();
    
    UFUNCTION(BlueprintCallable)
    void ToggleTo3PV();
    
    UFUNCTION(BlueprintCallable)
    void RenderingSettingsChanged();
    
};

