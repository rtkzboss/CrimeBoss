#include "IGS_PoolDevSettings.h"

UIGS_PoolDevSettings::UIGS_PoolDevSettings() {
    (*this).PoolItemsDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Core/Tables/DT_PoolDatabase.DT_PoolDatabase"), TEXT(""));
}


