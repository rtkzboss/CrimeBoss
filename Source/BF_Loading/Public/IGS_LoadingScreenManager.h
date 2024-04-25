#pragma once
#include "CoreMinimal.h"
#include "EIGS_InputDevice.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "IGS_LoadingScreenManager.generated.h"

class UIGS_LoadingScreenDataAsset;
class UIGS_RichTextBlockDecoratorBase;
class UObject;
class UTexture;

UCLASS(Blueprintable)
class BF_LOADING_API UIGS_LoadingScreenManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_LoadingScreenDataAsset* Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* BackgroundTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* ThrobberBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture> CustomBackgroundTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UIGS_RichTextBlockDecoratorBase*> m_LoadingTipsDecoratorOwner;
    
public:
    UIGS_LoadingScreenManager();

    UFUNCTION(BlueprintCallable)
    static void SetLoadingScreenSetupType(UObject* inWCO, FGameplayTag inTag);
    
    UFUNCTION(BlueprintCallable)
    static void SetLoadingScreenSecondaryText(UObject* inWCO, FText InText);
    
    UFUNCTION(BlueprintCallable)
    static void SetLoadingScreenMainText(UObject* inWCO, FText InText);
    
    UFUNCTION(BlueprintCallable)
    static void SetLoadingScreenBackgroundTexture(UObject* inWCO, TSoftObjectPtr<UTexture> inBackgroundTexture);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugState(UObject* inWCO, bool inState);
    
    UFUNCTION(BlueprintCallable)
    static void SetAdditionalLoadingScreenTips(UObject* inWCO, FGameplayTagContainer inTagContainer);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnInputDeviceChanged(EIGS_InputDevice inInputDevice);
    
public:
    UFUNCTION(BlueprintCallable)
    static bool IsLoadingScreenSetupTypeSet(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static bool GetDebugState(UObject* inWCO, bool inState);
    
};

