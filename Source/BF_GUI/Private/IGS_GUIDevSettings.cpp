#include "IGS_GUIDevSettings.h"

UIGS_GUIDevSettings::UIGS_GUIDevSettings() {
    (*this).HUDDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Core/HUD/DT_HUDDataTable.DT_HUDDataTable"), TEXT(""));
    (*this).WorldWidgetDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Core/HUD/DT_WorldWidgetDatabase.DT_WorldWidgetDatabase"), TEXT(""));
}


