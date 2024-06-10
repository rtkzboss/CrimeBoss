#include "META_CinematicMissionRowInfo.h"

FMETA_CinematicMissionRowInfo::FMETA_CinematicMissionRowInfo() {
    (*this).CutsceneID = FText::FromString(TEXT(""));
    (*this).DebugText = FText::FromString(TEXT(""));
    (*this).Name = FText::FromString(TEXT(""));
    (*this).Description = FText::FromString(TEXT(""));
    (*this).DaysOnMap = -1;
    (*this).MinCrewSize = 1;
    (*this).MaxCrewSize = 4;
    auto& gen917 = (*this).CharactersRequired;
    gen917.Empty();
    auto& gen918 = (*this).CharactersRequiredButNotOwned;
    gen918.Empty();
    auto& gen919 = (*this).ResultsWhenJobIsNotRemovedFromTheMap;
    gen919.Empty();
    (*this).DistrictType = EIGS_HubDistrict::INVALID;
    (*this).BackdropType = EIGS_HubBackdropTypes::AllRandom;
}

