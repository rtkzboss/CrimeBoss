#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "IGS_GetOnlineTimeFinishedPinDelegate.h"
#include "IGS_GetOnlineTimeLatent.generated.h"

class UIGS_GetOnlineTimeLatent;
class UObject;

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API UIGS_GetOnlineTimeLatent : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_GetOnlineTimeFinishedPin Finished;
    
    UIGS_GetOnlineTimeLatent();

    UFUNCTION(BlueprintCallable)
    static UIGS_GetOnlineTimeLatent* GetOnlineTimeLatent(UObject* inWCO);
    
private:
    UFUNCTION(BlueprintCallable)
    void ExecFinish(FDateTime inDateTime);
    
};

