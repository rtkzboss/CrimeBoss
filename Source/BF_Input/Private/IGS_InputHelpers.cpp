#include "IGS_InputHelpers.h"

UIGS_InputHelpers::UIGS_InputHelpers() {
}

void UIGS_InputHelpers::GetUserFriendlyActionNames(UObject* inWCO, FName inActionName, TArray<FText>& outTexts) {
}

void UIGS_InputHelpers::GetInputActionString(UObject* inWCO, EIGS_InputAction InAction, FName& OutText) {
}

TArray<EIGS_InputAction> UIGS_InputHelpers::GetInputActionsFromFKey(UObject* inWCO, FKey inKey, bool bGamepadKey) {
    return TArray<EIGS_InputAction>();
}

TArray<FText> UIGS_InputHelpers::GetInputActionNamesFromFKey(UObject* inWCO, FKey inKey, bool bGamepadKey) {
    return TArray<FText>();
}

EIGS_InputAction UIGS_InputHelpers::GetInputActionFromFKey(UObject* inWCO, FKey inKey, bool bGamepadKey) {
    return EIGS_InputAction::IA_UNKNOWN;
}

FIGS_InputActionEntry UIGS_InputHelpers::GetInputActionEntry(UObject* inWCO, EIGS_InputAction InAction) {
    return FIGS_InputActionEntry{};
}

FKey UIGS_InputHelpers::GetFKeyByActionName(FName inActionName, bool bGamepadKey, bool inAlternativeKey) {
    return FKey{};
}

TArray<FName> UIGS_InputHelpers::GetActionNamesByFKey(FKey inKey, bool bGamepadKey) {
    return TArray<FName>();
}

void UIGS_InputHelpers::DsSetLightColor(const APlayerController* inPc, const FColor& InColor) {
}

void UIGS_InputHelpers::DsSetDualSenseTriggerWeapon(const APlayerController* inPc, const EIGS_DsTriggerMask inTriggerMask, const FIGS_DsWeaponTrigger& inData) {
}

void UIGS_InputHelpers::DsSetDualSenseTriggerVibration2(const APlayerController* inPc, const EIGS_DsTriggerMask inTriggerMask, FIGS_DsVibrationTrigger2& inData) {
}

void UIGS_InputHelpers::DsSetDualSenseTriggerVibration(const APlayerController* inPc, const EIGS_DsTriggerMask inTriggerMask, const FIGS_DsVibrationTrigger& inData) {
}

void UIGS_InputHelpers::DsSetDualSenseTriggerOff(const APlayerController* inPc, const EIGS_DsTriggerMask inTriggerMask) {
}

void UIGS_InputHelpers::DsSetDualSenseTriggerFeedback3(const APlayerController* inPc, const EIGS_DsTriggerMask inTriggerMask, const FIGS_DsFeedback3& inData) {
}

void UIGS_InputHelpers::DsSetDualSenseTriggerFeedback2(const APlayerController* inPc, const EIGS_DsTriggerMask inTriggerMask, FIGS_DsFeedback2& inData) {
}

void UIGS_InputHelpers::DsSetDualSenseTriggerFeedback(const APlayerController* inPc, const EIGS_DsTriggerMask inTriggerMask, const FIGS_DsFeedback& inData) {
}

void UIGS_InputHelpers::DsResetLightColor(const APlayerController* inPc) {
}

void UIGS_InputHelpers::DsDualSenseRestoreLastTriggerStates() {
}


