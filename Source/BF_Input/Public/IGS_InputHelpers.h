#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InputCoreTypes.h"
#include "EIGS_DsTriggerMask.h"
#include "EIGS_InputAction.h"
#include "IGS_DsFeedback.h"
#include "IGS_DsFeedback2.h"
#include "IGS_DsFeedback3.h"
#include "IGS_DsVibrationTrigger.h"
#include "IGS_DsVibrationTrigger2.h"
#include "IGS_DsWeaponTrigger.h"
#include "IGS_InputActionEntry.h"
#include "IGS_InputHelpers.generated.h"

class APlayerController;
class UObject;

UCLASS(Blueprintable)
class BF_INPUT_API UIGS_InputHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_InputHelpers();

    UFUNCTION(BlueprintCallable)
    static void GetUserFriendlyActionNames(UObject* inWCO, FName inActionName, TArray<FText>& outTexts);
    
    UFUNCTION(BlueprintCallable)
    static void GetInputActionString(UObject* inWCO, EIGS_InputAction InAction, FName& OutText);
    
    UFUNCTION(BlueprintCallable)
    static TArray<EIGS_InputAction> GetInputActionsFromFKey(UObject* inWCO, FKey inKey, bool bGamepadKey);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FText> GetInputActionNamesFromFKey(UObject* inWCO, FKey inKey, bool bGamepadKey);
    
    UFUNCTION(BlueprintCallable)
    static EIGS_InputAction GetInputActionFromFKey(UObject* inWCO, FKey inKey, bool bGamepadKey);
    
    UFUNCTION(BlueprintCallable)
    static FIGS_InputActionEntry GetInputActionEntry(UObject* inWCO, EIGS_InputAction InAction);
    
    UFUNCTION(BlueprintCallable)
    static FKey GetFKeyByActionName(FName inActionName, bool bGamepadKey, bool inAlternativeKey);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FName> GetActionNamesByFKey(FKey inKey, bool bGamepadKey);
    
    UFUNCTION(BlueprintCallable)
    static void DsSetLightColor(const APlayerController* inPc, const FColor& InColor);
    
    UFUNCTION(BlueprintCallable)
    static void DsSetDualSenseTriggerWeapon(const APlayerController* inPc, const EIGS_DsTriggerMask inTriggerMask, const FIGS_DsWeaponTrigger& inData);
    
    UFUNCTION(BlueprintCallable)
    static void DsSetDualSenseTriggerVibration2(const APlayerController* inPc, const EIGS_DsTriggerMask inTriggerMask, FIGS_DsVibrationTrigger2& inData);
    
    UFUNCTION(BlueprintCallable)
    static void DsSetDualSenseTriggerVibration(const APlayerController* inPc, const EIGS_DsTriggerMask inTriggerMask, const FIGS_DsVibrationTrigger& inData);
    
    UFUNCTION(BlueprintCallable)
    static void DsSetDualSenseTriggerOff(const APlayerController* inPc, const EIGS_DsTriggerMask inTriggerMask);
    
    UFUNCTION(BlueprintCallable)
    static void DsSetDualSenseTriggerFeedback3(const APlayerController* inPc, const EIGS_DsTriggerMask inTriggerMask, const FIGS_DsFeedback3& inData);
    
    UFUNCTION(BlueprintCallable)
    static void DsSetDualSenseTriggerFeedback2(const APlayerController* inPc, const EIGS_DsTriggerMask inTriggerMask, FIGS_DsFeedback2& inData);
    
    UFUNCTION(BlueprintCallable)
    static void DsSetDualSenseTriggerFeedback(const APlayerController* inPc, const EIGS_DsTriggerMask inTriggerMask, const FIGS_DsFeedback& inData);
    
    UFUNCTION(BlueprintCallable)
    static void DsResetLightColor(const APlayerController* inPc);
    
    UFUNCTION(BlueprintCallable)
    static void DsDualSenseRestoreLastTriggerStates();
    
};

