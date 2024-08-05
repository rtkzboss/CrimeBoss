#include "IGS_CrimeBossMetaDevSettings.h"

UIGS_CrimeBossMetaDevSettings::UIGS_CrimeBossMetaDevSettings() {
    (*this).PlotlineAssetsDataTable = FSoftObjectPath(TEXT("/Game/CrimeBossMeta/Resources/DT_PlotlineAssetsDatabase.DT_PlotlineAssetsDatabase"), TEXT(""));
    (*this).RandEventsDataTable = FSoftObjectPath(TEXT("/Game/CrimeBossMeta/Resources/RandomEvents/DT_RandEventsDatabase.DT_RandEventsDatabase"), TEXT(""));
}


