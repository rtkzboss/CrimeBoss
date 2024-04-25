#pragma once
#include "CoreMinimal.h"
#include "IGS_Widget.h"
#include "IGS_WidgetCountdownLabel.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_WidgetCountdownLabel : public UIGS_Widget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RemainingSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowNegativeSeconds;
    
    UIGS_WidgetCountdownLabel();

    UFUNCTION(BlueprintCallable)
    void StopCountdown();
    
    UFUNCTION(BlueprintCallable)
    void StartCountdown(int32 InSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRemainingSecondsValue(int32 InSeconds);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleCountdownTick();
    
};

