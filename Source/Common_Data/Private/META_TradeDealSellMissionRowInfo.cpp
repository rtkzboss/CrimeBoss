#include "META_TradeDealSellMissionRowInfo.h"

FMETA_TradeDealSellMissionRowInfo::FMETA_TradeDealSellMissionRowInfo() {
    (*this).CutsceneID = FText::FromString(TEXT(""));
    (*this).DebugText = FText::FromString(TEXT(""));
    (*this).Picture = nullptr;
    (*this).MapIconOverride = nullptr;
    (*this).Name = FText::FromString(TEXT(""));
    (*this).Description = FText::FromString(TEXT(""));
    (*this).DaysOnMap = -1;
    (*this).MinCrewSize = 1;
    (*this).MaxCrewSize = 4;
    (*this).CharactersRequired.Empty();
    (*this).CharactersRequiredButNotOwned.Empty();
    (*this).ResultsWhenJobIsNotRemovedFromTheMap.Empty();
    (*this).Vendor = EMETA_TradeVendor::UNDEFINED;
}

