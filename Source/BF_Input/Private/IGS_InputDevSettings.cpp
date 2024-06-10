#include "IGS_InputDevSettings.h"

UIGS_InputDevSettings::UIGS_InputDevSettings() {
    (*this).InputActionMap = FSoftObjectPath(TEXT("/Game/00_Main/Input/InputTables/DA_InputActionMap.DA_InputActionMap"), TEXT(""));
    (*this).InputActionIconMapPS5 = FSoftObjectPath(TEXT("/Game/00_Main/Input/InputTables/DA_PS5_InputKeyIcons.DA_PS5_InputKeyIcons"), TEXT(""));
    (*this).InputActionIconMapXBSX = FSoftObjectPath(TEXT("/Game/00_Main/Input/InputTables/DA_XBSX_InputKeyIcons.DA_XBSX_InputKeyIcons"), TEXT(""));
    (*this).InputActionIconMapSteamDeck = FSoftObjectPath(TEXT("/Game/00_Main/Input/InputTables/DA_SteamDeck_InputKeyIcons.DA_SteamDeck_InputKeyIcons"), TEXT(""));
    (*this).InputActionIconMapPC = FSoftObjectPath(TEXT("/Game/00_Main/Input/InputTables/DA_PC_InputKeyIcons.DA_PC_InputKeyIcons"), TEXT(""));
    (*this).InputActionDefaultKeys = FSoftObjectPath(TEXT("/Game/00_Main/Input/InputTables/DA_DefaultInputKeys.DA_DefaultInputKeys"), TEXT(""));
}


