#include "META_TradeDealSellMissionRowInfo.h"

FMETA_TradeDealSellMissionRowInfo::FMETA_TradeDealSellMissionRowInfo() {
    (*this).CutsceneID = FText::FromString(TEXT(""));
    (*this).DebugText = FText::FromString(TEXT(""));
    (*this).Name = FText::FromString(TEXT(""));
    (*this).Description = FText::FromString(TEXT(""));
    (*this).DaysOnMap = -1;
    (*this).MinCrewSize = 1;
    (*this).MaxCrewSize = 4;
    auto& gen906 = (*this).CharactersRequired;
    gen906.Empty();
    auto& gen907 = (*this).CharactersRequiredButNotOwned;
    gen907.Empty();
    auto& gen908 = (*this).ResultsWhenJobIsNotRemovedFromTheMap;
    gen908.Empty();
    (*this).Vendor = EMETA_TradeVendor::UNDEFINED;
}

