#include "META_TradeMissionRowInfo.h"

FMETA_TradeMissionRowInfo::FMETA_TradeMissionRowInfo() {
    (*this).CutsceneID = FText::FromString(TEXT(""));
    (*this).DebugText = FText::FromString(TEXT(""));
    auto& gen920 = (*this).Expenses;
    gen920.Empty();
    (*this).Name = FText::FromString(TEXT(""));
    (*this).Description = FText::FromString(TEXT(""));
    (*this).DaysOnMap = -1;
    (*this).MinCrewSize = 1;
    (*this).MaxCrewSize = 4;
    auto& gen921 = (*this).CharactersRequired;
    gen921.Empty();
    auto& gen922 = (*this).CharactersRequiredButNotOwned;
    gen922.Empty();
    auto& gen923 = (*this).ResultsWhenJobIsNotRemovedFromTheMap;
    gen923.Empty();
    (*this).DistrictType = EIGS_HubDistrict::Downtown;
    (*this).BackdropType = EIGS_HubBackdropTypes::AllRandom;
}

