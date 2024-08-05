#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GameplayTagContainer.h"
#include "IGS_CutsceneTagValue.h"
#include "IGS_MetaCutsceneCharacters.h"
#include "IGS_MetaCutsceneResultDelegateDelegate.h"
#include "IGS_MetaCutsceneResults.h"
#include "IGS_PlayMetaCutscene.generated.h"

class UIGS_PlayMetaCutscene;
class UObject;

UCLASS(Blueprintable)
class PAYBACK_API UIGS_PlayMetaCutscene : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MetaCutsceneResultDelegate CutsceneStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MetaCutsceneResultDelegate CutsceneFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MetaCutsceneResultDelegate CutsceneUnloaded;
    
    UIGS_PlayMetaCutscene();

    UFUNCTION(BlueprintCallable)
    static UIGS_PlayMetaCutscene* PlayMetaCutscene(UObject* inWCO, FText inCutsceneID, FText inDebugText, TMap<FGameplayTag, FIGS_CutsceneTagValue> inTagParams, FIGS_MetaCutsceneCharacters inCharacters, bool inAutoStart);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCutsceneUnloaded(FName inCutsceneID);
    
    UFUNCTION(BlueprintCallable)
    void OnCutsceneStarted(FName inCutsceneID, FIGS_MetaCutsceneResults inResults);
    
    UFUNCTION(BlueprintCallable)
    void OnCutsceneLoaded(FName inCutsceneID);
    
    UFUNCTION(BlueprintCallable)
    void OnCutsceneFinished(FName inCutsceneID, FIGS_MetaCutsceneResults inResult);
    
    UFUNCTION(BlueprintCallable)
    void LoadCutscene(FName inCutsceneID);
    
};

