#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "IGS_SettingsBase.h"
#include "IGS_RenderingSettings.generated.h"

class UIGS_RenderingSettings;
class UMaterialParameterCollection;

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class BF_SETTINGS_API UIGS_RenderingSettings : public UIGS_SettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FullscreenModeValue;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResolutionValue;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool VSyncEnabledValue;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResolutionScaleValue;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProfileValue;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ViewDistanceQualityValue;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AntiAliasingQualityValue;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PostProcessingQualityValue;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShadowQualityValue;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TextureQualityValue;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VisualEffectQualityValue;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FoliageQualityValue;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MotionBlurScaleFPV;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MotionBlurScale3PV;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseCameraFOVHorizontal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasFirstTimeBenchmarked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasFirstTimeMainMenuInitialized;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DLSSMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 XeSSmode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 FSRmode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 FrameGenerationMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReflexMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDLAAenabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChosenDisplay;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MotionBlurEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSSREnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAOEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SharpenFilterStrength;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FramerateLimitInGame;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FramerateLimitInMenu;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FramerateLimitOutOfFocus;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanChangeMonitorPositions;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bQualityModeForConsoles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* m_ExtendedSettingsParameterCollection;
    
    UIGS_RenderingSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float VerticalFOVToActualHorizontalFOV(float inVerticalFOV, FVector2D inViewportSize);
    
    UFUNCTION(BlueprintCallable)
    void UseLockpickRenderingSettings(bool inIsLockpicking);
    
    UFUNCTION(BlueprintCallable)
    void UseBotWheelRenderingSettings(bool inIsPaused);
    
    UFUNCTION(BlueprintCallable)
    void SetQualityLevels_Auto(bool inRunBenchmark);
    
    UFUNCTION(BlueprintCallable)
    void SetIsGamePausedInMenu(bool inIsPausedInMenu);
    
    UFUNCTION(BlueprintCallable)
    void SetIsCurrentGameModeMenu(bool inIsMenu);
    
    UFUNCTION(BlueprintCallable)
    void SetFramerateUnlockedCinematic(bool inUnlocked);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UIGS_RenderingSettings* Instance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float HorizontalFOV2VerticalFOV(float inHorizontalFOV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FIntPoint> GetSupportedScreenResolutions();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsSteamDeck();
    
    UFUNCTION(BlueprintCallable)
    void EnableReducedTexturePoolSize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void EnableMovieCVarSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DisableMovieCVarSettings() const;
    
};

