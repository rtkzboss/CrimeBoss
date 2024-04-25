#pragma once
#include "CoreMinimal.h"
#include "IGS_InteractiveComponent.h"
#include "IGS_LockPickDifficultySetting.h"
#include "IGS_LockpickInteractiveComponent.generated.h"

class AIGS_GameCharacterFramework;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_LockpickInteractiveComponent : public UIGS_InteractiveComponent {
    GENERATED_BODY()
public:
    UIGS_LockpickInteractiveComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ReportLockPickEnded(AIGS_GameCharacterFramework* inInstigator, const bool inSuccess) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FIGS_LockPickDifficultySetting GetLockPickDifficultySettings();
    
};

