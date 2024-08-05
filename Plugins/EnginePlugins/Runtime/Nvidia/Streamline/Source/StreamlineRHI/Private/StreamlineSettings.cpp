#include "StreamlineSettings.h"

UStreamlineSettings::UStreamlineSettings() {
    (*this).bEnableStreamlineD3D12 = true;
    (*this).bEnableStreamlineD3D11 = true;
    (*this).bEnableDLSSFGInPlayInEditorViewports = true;
    (*this).bAllowOTAUpdate = true;
}


