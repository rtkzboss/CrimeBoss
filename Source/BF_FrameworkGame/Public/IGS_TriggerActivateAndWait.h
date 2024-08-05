#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "IGS_TriggerEventOutputPinDelegate.h"
#include "IGS_TriggerActivateAndWait.generated.h"

class AIGS_Trigger;
class UIGS_TriggerActivateAndWait;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_TriggerActivateAndWait : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_TriggerEventOutputPin Triggered;
    
    UIGS_TriggerActivateAndWait();

    UFUNCTION(BlueprintCallable)
    static UIGS_TriggerActivateAndWait* TriggerActivateAndWait(AIGS_Trigger* inTrigger, bool inResetCount);
    
};

