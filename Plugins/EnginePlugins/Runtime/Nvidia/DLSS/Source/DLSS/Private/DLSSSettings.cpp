#include "DLSSSettings.h"

UDLSSSettings::UDLSSSettings() {
    (*this).bEnableDLSSD3D12 = true;
    (*this).bEnableDLSSD3D11 = true;
    (*this).bEnableDLSSVulkan = true;
    (*this).bEnableDLSSInEditorViewports = true;
    (*this).bEnableDLSSInPlayInEditorViewports = true;
    (*this).bShowDLSSSDebugOnScreenMessages = true;
    (*this).bAllowOTAUpdate = true;
}


