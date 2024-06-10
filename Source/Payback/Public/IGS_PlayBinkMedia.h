#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "BinkSubtitleItem.h"
#include "IGS_BinkMediaEventDelegate.h"
#include "IGS_PlayBinkMedia.generated.h"

class UBinkMediaPlayer;
class UBinkMediaTexture;
class UIGS_BinkMediaWidget;
class UIGS_PlayBinkMedia;
class UIGS_ScreenHandler;
class UObject;

UCLASS(Blueprintable)
class PAYBACK_API UIGS_PlayBinkMedia : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_BinkMediaEvent Finished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_BinkMediaEvent Started;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_BinkMediaEvent Stopped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_BinkMediaEvent Failed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_BinkMediaEvent Prepared;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_BinkMediaEvent SubtitleEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_BinkMediaWidget* BinkMediaWidget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_ScreenHandler* m_ScreenHandler;
    
public:
    UIGS_PlayBinkMedia();

    UFUNCTION(BlueprintCallable)
    void StopMovie();
    
    UFUNCTION(BlueprintCallable)
    void SkipMovie();
    
    UFUNCTION(BlueprintCallable)
    void SetVolume(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void PlayMedia();
    
    UFUNCTION(BlueprintCallable)
    static UIGS_PlayBinkMedia* PlayBinkMedia(UObject* inWCO, UBinkMediaPlayer* inBinkMediaPlayer, bool inAutoStart, bool inAddToScreenHandler);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnWidgetSkipTriggered();
    
    UFUNCTION(BlueprintCallable)
    void OnMediaReachedEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelLoadStarted(FName inLevelName, bool inIsServerTravel);
    
public:
    UFUNCTION(BlueprintCallable)
    UBinkMediaTexture* GetMediaTexture();
    
    UFUNCTION(BlueprintCallable)
    FTimespan GetElapsedTime();
    
    UFUNCTION(BlueprintCallable)
    FTimespan GetDuration();
    
    UFUNCTION(BlueprintCallable)
    FBinkSubtitleItem GetCurrentSubtitleItem();
    
};

