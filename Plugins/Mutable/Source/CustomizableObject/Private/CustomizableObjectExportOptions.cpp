#include "CustomizableObjectExportOptions.h"

FCustomizableObjectExportOptions::FCustomizableObjectExportOptions() {
    (*this).bTextureCompression = true;
    (*this).TargetPlatform = TEXT("");
}

