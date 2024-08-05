#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "BotOrderPlannerOutputPinDelegate.h"
#include "IGS_BotOrderPlanner.generated.h"

class UIGS_BotOrderPlanner;
class UObject;

UCLASS(Blueprintable)
class BF_AI_API UIGS_BotOrderPlanner : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBotOrderPlannerOutputPin Finished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBotOrderPlannerOutputPin Interrupted;
    
    UIGS_BotOrderPlanner();

private:
    UFUNCTION(BlueprintCallable)
    void ExecFinish(bool inPlayerResponse);
    
    UFUNCTION(BlueprintCallable)
    void ExecExpire();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWorldContextObject))
    static UIGS_BotOrderPlanner* BotOrderPlanner(UObject* inWorldContextObject, FText Text, float Cooldown, bool OverwriteExistingOrder, int32 AliveBotsNeeded);
    
};

