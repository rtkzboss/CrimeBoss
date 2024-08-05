#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "MiniTimerOutputPinDelegate.h"
#include "IGS_MiniTimer.generated.h"

class UIGS_MiniTimer;
class UObject;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_MiniTimer : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMiniTimerOutputPin Update;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMiniTimerOutputPin Finished;
    
    UIGS_MiniTimer();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWorldContextObject))
    static UIGS_MiniTimer* MiniTimer(UObject* inWorldContextObject, float inTimerInterval, float inTimerDuration);
    
private:
    UFUNCTION(BlueprintCallable)
    void ExecUpdate();
    
    UFUNCTION(BlueprintCallable)
    void ExecFinish();
    
};

