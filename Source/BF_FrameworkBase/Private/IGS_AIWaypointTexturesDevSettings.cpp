#include "IGS_AIWaypointTexturesDevSettings.h"

UIGS_AIWaypointTexturesDevSettings::UIGS_AIWaypointTexturesDevSettings() {
    (*this).TargetSprite = FSoftObjectPath(TEXT("/Engine/EditorMaterials/TargetIcon.TargetIcon"), TEXT(""));
    (*this).PatrolPointSprite = FSoftObjectPath(TEXT("/Game/00_Main/UI/EditorIcons/T_GUI_Icon_PatrolPoint.T_GUI_Icon_PatrolPoint"), TEXT(""));
    (*this).SniperPointSprite = FSoftObjectPath(TEXT("/Game/00_Main/UI/EditorIcons/T_GUI_Icon_SniperPoint.T_GUI_Icon_SniperPoint"), TEXT(""));
    (*this).DefendPointSprite = FSoftObjectPath(TEXT("/Game/00_Main/UI/EditorIcons/T_GUI_Icon_DefendPoint.T_GUI_Icon_DefendPoint"), TEXT(""));
    (*this).PatrolGroupSprite = FSoftObjectPath(TEXT("/Game/00_Main/UI/EditorIcons/T_GUI_Icon_PatrolGroup.T_GUI_Icon_PatrolGroup"), TEXT(""));
    (*this).ScriptPointSprite = FSoftObjectPath(TEXT("/Game/00_Main/UI/EditorIcons/T_GUI_Icon_ScriptPoint.T_GUI_Icon_ScriptPoint"), TEXT(""));
    (*this).ControlRoomSprite = FSoftObjectPath(TEXT("/Game/00_Main/UI/EditorIcons/T_GUI_Icon_ControlRoom.T_GUI_Icon_ControlRoom"), TEXT(""));
    (*this).SmartObjectSprite = FSoftObjectPath(TEXT("/Game/00_Main/UI/EditorIcons/T_GUI_Icon_SmartObject.T_GUI_Icon_SmartObject"), TEXT(""));
    (*this).WaypointConnectionSprite = FSoftObjectPath(TEXT("/Game/00_Main/UI/EditorIcons/T_GUI_Icon_WaypointConnection.T_GUI_Icon_WaypointConnection"), TEXT(""));
    (*this).FlagLockedSprite = FSoftObjectPath(TEXT("/Game/00_Main/UI/EditorIcons/T_GUI_Flag_Locked.T_GUI_Flag_Locked"), TEXT(""));
    (*this).FlagInfiniteSprite = FSoftObjectPath(TEXT("/Game/00_Main/UI/EditorIcons/T_GUI_Flag_Infinite.T_GUI_Flag_Infinite"), TEXT(""));
}


