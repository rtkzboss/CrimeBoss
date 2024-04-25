#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "IGS_OnTransitionFinishedDelegate.h"
#include "IGS_SetMenuFadeTransitionStateLatent.generated.h"

class UIGS_SetMenuFadeTransitionStateLatent;
class UObject;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UIGS_SetMenuFadeTransitionStateLatent : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnTransitionFinished OnTransitionFinished;
    
    UIGS_SetMenuFadeTransitionStateLatent();

private:
    UFUNCTION(BlueprintCallable)
    void TransitionFinished_Internal();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContextObject))
    static UIGS_SetMenuFadeTransitionStateLatent* ShowMenuTransition(UObject* WorldContextObject, bool inShouldFade, float inFadeTime, bool inShowLoader);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContextObject))
    static UIGS_SetMenuFadeTransitionStateLatent* HideMenuTransition(UObject* WorldContextObject, bool inShouldFade, float inFadeTime);
    
};

