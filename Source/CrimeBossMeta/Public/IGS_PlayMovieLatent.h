#pragma once
#include "CoreMinimal.h"
#include "META_MovieUIData.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "IGS_OnMovieFinishedLatentDelegate.h"
#include "IGS_OnMovieStartedLatentDelegate.h"
#include "IGS_PlayMovieLatent.generated.h"

class UIGS_PlayMovieLatent;
class UObject;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UIGS_PlayMovieLatent : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnMovieStartedLatent OnMovieStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnMovieFinishedLatent OnMovieFinished;
    
    UIGS_PlayMovieLatent();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContextObject))
    static UIGS_PlayMovieLatent* PlayMovieLatent(UObject* WorldContextObject, FMETA_MovieUIData inMovieData);
    
private:
    UFUNCTION(BlueprintCallable)
    void MovieStarted_Internal();
    
    UFUNCTION(BlueprintCallable)
    void MovieFinished_Internal();
    
};

