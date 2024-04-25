#include "IGS_VirtualCursorSettings.h"

UIGS_VirtualCursorSettings::UIGS_VirtualCursorSettings() {
    this->MaxVirtualCursorSpeed = 1300.00f;
    this->MaxVirtualCursorSpeedWhenHovering = 650.00f;
    this->VirtualCursorDragCoefficient = 8.00f;
    this->VirtualCursorDragCoefficientWhenHovering = 14.00f;
    this->MinVirtualCursorSpeed = 5.00f;
    this->VirtualCursorDeadZone = 0.15f;
    this->VirtualCursorAccelerationMultiplier = 9000.00f;
    this->VirtualCursorSize = 40.00f;
    this->bUseEngineDefaultVirtualCursor = false;
    this->bVirtualCursorNoAcceleration = false;
    this->VirtualCursorStick = EIGS_VirtualCursorStick::Left;
    this->VirtualHardwareCursorNormal = TEXT("T_GUI_VirtualCursor");
    this->VirtualHardwareCursorHovering = TEXT("T_GUI_VirtualCursor_Hover");
    this->NativeHardwareCursorNormal = TEXT("T_GUI_NativeCursor");
    this->NativeHardwareCursorHovering = TEXT("T_GUI_NativeCursor");
    this->VirtualSoftwareCursorWidgetClass = NULL;
    this->NativeSoftwareCursorWidgetClass = NULL;
    this->bUseSoftwareCursor = false;
}


