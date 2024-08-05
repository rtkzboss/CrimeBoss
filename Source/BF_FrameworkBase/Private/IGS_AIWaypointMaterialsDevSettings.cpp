#include "IGS_AIWaypointMaterialsDevSettings.h"

UIGS_AIWaypointMaterialsDevSettings::UIGS_AIWaypointMaterialsDevSettings() {
    (*this).TeamFlagCivilianMat = FSoftObjectPath(TEXT("/Game/00_Main/UI/EditorIcons/Materials/MI_GUI_Flag_TeamSide_Civilian.MI_GUI_Flag_TeamSide_Civilian"), TEXT(""));
    (*this).TeamFlagEmployeeMat = FSoftObjectPath(TEXT("/Game/00_Main/UI/EditorIcons/Materials/MI_GUI_Flag_TeamSide_Employee.MI_GUI_Flag_TeamSide_Employee"), TEXT(""));
    (*this).TeamFlagGuardMat = FSoftObjectPath(TEXT("/Game/00_Main/UI/EditorIcons/Materials/MI_GUI_Flag_TeamSide_Guard.MI_GUI_Flag_TeamSide_Guard"), TEXT(""));
    (*this).TeamFlagCopMat = FSoftObjectPath(TEXT("/Game/00_Main/UI/EditorIcons/Materials/MI_GUI_Flag_TeamSide_Cop.MI_GUI_Flag_TeamSide_Cop"), TEXT(""));
    (*this).TeamFlagSwatMat = FSoftObjectPath(TEXT("/Game/00_Main/UI/EditorIcons/Materials/MI_GUI_Flag_Teamside_SWAT.MI_GUI_Flag_TeamSide_SWAT"), TEXT(""));
    (*this).TeamFlagHeisterMat = FSoftObjectPath(TEXT("/Game/00_Main/UI/EditorIcons/Materials/MI_GUI_Flag_TeamSide_Heister.MI_GUI_Flag_TeamSide_Heister"), TEXT(""));
    (*this).TeamFlagGangsterMat = FSoftObjectPath(TEXT("/Game/00_Main/UI/EditorIcons/Materials/MI_GUI_Flag_TeamSide_Gangster.MI_GUI_Flag_TeamSide_Gangster"), TEXT(""));
    (*this).TeamFlagBackupMat = FSoftObjectPath(TEXT("/Game/00_Main/UI/EditorIcons/Materials/MI_GUI_Flag_TeamSide_Backup.MI_GUI_Flag_TeamSide_Backup"), TEXT(""));
}


