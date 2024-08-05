#include "BPSteamWorkshopItemDetails.h"

FBPSteamWorkshopItemDetails::FBPSteamWorkshopItemDetails() {
    (*this).ResultOfRequest = FBPSteamResult::k_EResultOK;
    (*this).FileType = FBPWorkshopFileType::k_EWorkshopFileTypeMax;
    (*this).CreatorAppID = 0;
    (*this).ConsumerAppID = 0;
    (*this).Title = TEXT("");
    (*this).Description = TEXT("");
    (*this).ItemUrl = TEXT("");
    (*this).VotesUp = 0;
    (*this).VotesDown = 0;
    (*this).CalculatedScore = 0.000000000e+00f;
    (*this).bBanned = false;
    (*this).bAcceptedForUse = false;
    (*this).bTagsTruncated = false;
    (*this).CreatorSteamID = TEXT("");
}

