#include "IGS_CommonUtilsDevSettings.h"

UIGS_CommonUtilsDevSettings::UIGS_CommonUtilsDevSettings() {
    (*this).EntitlementsDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Core/Tables/DT_EntitlementsDatabase.DT_EntitlementsDatabase"), TEXT(""));
    (*this).FreeWeekend_URL = TEXT("https://fw.ingamestudios.com/");
}


