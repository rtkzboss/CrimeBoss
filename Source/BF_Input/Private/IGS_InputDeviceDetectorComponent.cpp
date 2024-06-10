#include "IGS_InputDeviceDetectorComponent.h"
#include "ComponentInstanceDataCache.h"

UIGS_InputDeviceDetectorComponent::UIGS_InputDeviceDetectorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).GamepadDeadzone = 1.500000060e-01f;
}

EIGS_InputDevice UIGS_InputDeviceDetectorComponent::GetCurrentInputDevice() const {
    return EIGS_InputDevice::ID_UNKNOWN;
}


