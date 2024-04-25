#pragma once
#include "CoreMinimal.h"
#include "META_CutsceneUIData.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "IGS_OnCutsceneFinishedLatentDelegate.h"
#include "IGS_OnCutsceneStartedLatentDelegate.h"
#include "IGS_PlayCutsceneLatent.generated.h"

class UIGS_PlayCutsceneLatent;
class UObject;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UIGS_PlayCutsceneLatent : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnCutsceneStartedLatent OnCutsceneStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnCutsceneFinishedLatent OnCutsceneFinished;
    
    UIGS_PlayCutsceneLatent();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContextObject))
    static UIGS_PlayCutsceneLatent* PlayCutsceneLatent(UObject* WorldContextObject, FMETA_CutsceneUIData inCutsceneData);
    
private:
    UFUNCTION(BlueprintCallable)
    void CutsceneStarted_Internal();
    
    UFUNCTION(BlueprintCallable)
    void CutsceneFinished_Internal();
    
};

