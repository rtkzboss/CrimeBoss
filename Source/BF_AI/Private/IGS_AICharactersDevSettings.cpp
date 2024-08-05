#include "IGS_AICharactersDevSettings.h"

UIGS_AICharactersDevSettings::UIGS_AICharactersDevSettings() {
    (*this).SwatDataTable = nullptr;
    (*this).GangsterDataTable = nullptr;
    (*this).HeistersBackupDataTable = nullptr;
    (*this).CopDataTable = nullptr;
    (*this).GuardDataTable = nullptr;
    (*this).PlayerBotDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Core/AI/Characters/PlayerBot/Settings/DT_PlayerBotDatabase.DT_PlayerBotDatabase"), TEXT(""));
    (*this).SniperDataTable = nullptr;
    (*this).ShielderDataTable = nullptr;
    (*this).HeavyDataTable = nullptr;
    (*this).DetectiveDataTable = nullptr;
}


