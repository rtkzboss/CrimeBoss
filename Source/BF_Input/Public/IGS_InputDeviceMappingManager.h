#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "InputCoreTypes.h"
#include "EIGS_InputDevice.h"
#include "IGS_InputDeviceMappingManager.generated.h"

class UIGS_InputActionMapDataAsset;
class UIGS_InputDeviceIconsDataAsset;

UCLASS(Blueprintable)
class BF_INPUT_API UIGS_InputDeviceMappingManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_InputDeviceIconsDataAsset* PS5InputDeviceIconDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_InputDeviceIconsDataAsset* XBOXInputDeviceIconDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_InputDeviceIconsDataAsset* SteamDeckInputDeviceIconDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_InputDeviceIconsDataAsset* PCInputDeviceIconDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_InputActionMapDataAsset* InputActionMapDataAsset;
    
    UIGS_InputDeviceMappingManager();

    UFUNCTION(BlueprintCallable)
    void GetInputActionSymbolBP(FKey inKey, EIGS_InputDevice inInputDevice, FName& outSymbol);
    
};

