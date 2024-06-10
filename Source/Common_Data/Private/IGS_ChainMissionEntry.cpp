#include "IGS_ChainMissionEntry.h"

FIGS_ChainMissionEntry::FIGS_ChainMissionEntry() {
    (*this).bShowAdvancedProperties = false;
    (*this).BriefingCutscene = FText::FromString(TEXT(""));
    (*this).BriefingMovie = nullptr;
    (*this).DebugMissionTitle = TEXT("- Unknown - ");
    (*this).MissionID = nullptr;
    (*this).EnableForDifficulty = 14;
    (*this).DebriefCutscene = FText::FromString(TEXT(""));
    (*this).DebriefMovie = nullptr;
    (*this).FailCutscene = FText::FromString(TEXT(""));
    (*this).FailMovie = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).LobbyMenuVOType, 0)) = NAME_None;
}

