#include "IGS_AIDevSettings.h"

UIGS_AIDevSettings::UIGS_AIDevSettings() {
    (*this).VehicleGroupDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Core/Tables/DT_VehicleGroupDatabase.DT_VehicleGroupDatabase"), TEXT(""));
    (*this).MovableVehicleGroupDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Core/Tables/DT_MovableVehicleGroupDatabase.DT_MovableVehicleGroupDatabase"), TEXT(""));
    (*this).GeneralReactionDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Core/Tables/AI/DT_GeneralReactionDatabase.DT_GeneralReactionDatabase"), TEXT(""));
    (*this).BotOrderDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Core/Tables/AI/DT_BotOrderDatabase.DT_BotOrderDatabase"), TEXT(""));
    (*this).VehicleDestinationAreaPointSprite = FSoftObjectPath(TEXT("/Game/00_Main/UI/EditorIcons/T_GUI_Icon_VehicleDestinationAreaPoint.T_GUI_Icon_VehicleDestinationAreaPoint"), TEXT(""));
    (*this).VehicleDestinationAreaPointSprite_Disabled = FSoftObjectPath(TEXT("/Game/00_Main/UI/EditorIcons/T_GUI_Icon_VehicleDestinationAreaPoint_Disabled.T_GUI_Icon_VehicleDestinationAreaPoint_Disabled"), TEXT(""));
}


