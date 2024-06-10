#include "META_TradeMissionRowInfo.h"

FMETA_TradeMissionRowInfo::FMETA_TradeMissionRowInfo() {
    (*this).CutsceneID = FText::FromString(TEXT(""));
    (*this).DebugText = FText::FromString(TEXT(""));
    (*this).Picture = nullptr;
    (*this).MapIconOverride = nullptr;
    (*this).Expenses.Empty();
    (*this).Name = FText::FromString(TEXT(""));
    (*this).Description = FText::FromString(TEXT(""));
    (*this).DaysOnMap = -1;
    (*this).MinCrewSize = 1;
    (*this).MaxCrewSize = 4;
    (*this).CharactersRequired.Empty();
    (*this).CharactersRequiredButNotOwned.Empty();
    (*this).ResultsWhenJobIsNotRemovedFromTheMap.Empty();
    (*this).DistrictType = EIGS_HubDistrict::Downtown;
    (*this).BackdropType = EIGS_HubBackdropTypes::AllRandom;
}

