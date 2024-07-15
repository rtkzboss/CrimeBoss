#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "IGS_ComipleShadersFinishedPinDelegate.h"
#include "IGS_CompileShadersProgressPinDelegate.h"
#include "IGS_CompileShadersLatent.generated.h"

class UIGS_CompileShadersLatent;
class UObject;

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API UIGS_CompileShadersLatent : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_CompileShadersProgressPin Update;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ComipleShadersFinishedPin Finished;
    
    UIGS_CompileShadersLatent();

private:
    UFUNCTION(BlueprintCallable)
    void ExecUpdate();
    
    UFUNCTION(BlueprintCallable)
    void ExecFinish();
    
public:
    UFUNCTION(BlueprintCallable)
    static UIGS_CompileShadersLatent* CompileShadersLatent(UObject* inWCO, float inUpdateFrequence);
    
    UFUNCTION(BlueprintCallable)
    void Cancel();
    
};

