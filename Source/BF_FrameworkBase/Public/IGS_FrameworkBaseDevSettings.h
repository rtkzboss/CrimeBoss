#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "IGS_FrameworkBaseDevSettings.generated.h"

class UAkAudioEvent;
class UAkSwitchValue;
class UGameplayEffect;
class UIGS_GASDefaultAttributesDataAsset;
class UIGS_ProgressionManagerData;
class UIGS_UnlockManagerData;
class UMaterialParameterCollection;

UCLASS(Blueprintable, DefaultConfig, Config="DeveloperSettings/Dev_FrameworkBaseSettings")
class BF_FRAMEWORKBASE_API UIGS_FrameworkBaseDevSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkSwitchValue> FootstepNoneAkSwitch;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> DeathAkEvent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> StopInspectAkEvent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialParameterCollection> WieldableMPCPath;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGameplayEffect> MoveSpeedGameplayEffect;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UIGS_GASDefaultAttributesDataAsset> DefaultCharacterAttributes;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UIGS_GASDefaultAttributesDataAsset> DefaultGlobalAttributes;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UIGS_UnlockManagerData> UnlockManagerData;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UIGS_ProgressionManagerData> ProgressionManagerData;
    
    UIGS_FrameworkBaseDevSettings();

};

