#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "IGS_InputDevSettings.generated.h"

class UIGS_InputActionDefaultKeysDataAsset;
class UIGS_InputActionMapDataAsset;
class UIGS_InputDeviceIconsDataAsset;

UCLASS(Blueprintable, DefaultConfig, Config="DeveloperSettings/Dev_InputSettings")
class BF_INPUT_API UIGS_InputDevSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UIGS_InputActionMapDataAsset> InputActionMap;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UIGS_InputDeviceIconsDataAsset> InputActionIconMapPS5;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UIGS_InputDeviceIconsDataAsset> InputActionIconMapXBSX;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UIGS_InputDeviceIconsDataAsset> InputActionIconMapSteamDeck;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UIGS_InputDeviceIconsDataAsset> InputActionIconMapPC;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UIGS_InputActionDefaultKeysDataAsset> InputActionDefaultKeys;
    
    UIGS_InputDevSettings();

};

