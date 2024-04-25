#pragma once
#include "CoreMinimal.h"
#include "IGS_AlarmDeviceBase.h"
#include "IGS_AlarmButtonBase.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_AlarmButtonBase : public AIGS_AlarmDeviceBase {
    GENERATED_BODY()
public:
    AIGS_AlarmButtonBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TriggerAlarm();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnButtonPressed(bool bAlarmSuccess);
    
public:
    UFUNCTION(BlueprintCallable)
    void ActivateAlarmButton();
    
};

