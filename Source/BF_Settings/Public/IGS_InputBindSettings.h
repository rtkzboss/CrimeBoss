#pragma once
#include "CoreMinimal.h"
#include "EIGS_InputAction.h"
#include "InputCoreTypes.h"
#include "Framework/Commands/InputChord.h"
#include "IGS_CachedInputBinding.h"
#include "IGS_SettingsBase.h"
#include "IGS_InputBindSettings.generated.h"

class UIGS_InputActionDefaultKeysDataAsset;
class UIGS_InputActionMapDataAsset;
class UIGS_InputBindSettings;

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class BF_SETTINGS_API UIGS_InputBindSettings : public UIGS_SettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_InputActionMapDataAsset* InputActionMapDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_InputActionDefaultKeysDataAsset* InputActionDefaultKeysAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_CachedInputBinding CachedBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_InputAction, FKey> GamepadMappings;
    
    UIGS_InputBindSettings();

    UFUNCTION(BlueprintCallable)
    static void SetInputAxisBinding(EIGS_InputAction InAction, FInputChord inInputChord, bool bIsGamepad, bool inSaveToConfig, float InValue, bool inAlternativeKey);
    
    UFUNCTION(BlueprintCallable)
    static void SetInputActionBinding(EIGS_InputAction InAction, FInputChord inInputChord, bool bIsGamepad, bool inSaveToConfig, bool inAlternativeKey);
    
    UFUNCTION(BlueprintCallable)
    void RevertSettings();
    
    UFUNCTION(BlueprintCallable)
    void ResetToDefaults();
    
    UFUNCTION(BlueprintCallable)
    void ResetGamepadBindings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UIGS_InputBindSettings* Instance();
    
    UFUNCTION(BlueprintCallable)
    void FailsafeFillEmptyBindings();
    
    UFUNCTION(BlueprintCallable)
    void CacheBindings();
    
    UFUNCTION(BlueprintCallable)
    void ApplySettings(bool inSave);
    
};

