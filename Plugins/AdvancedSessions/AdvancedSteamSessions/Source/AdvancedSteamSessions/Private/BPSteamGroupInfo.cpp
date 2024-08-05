#include "BPSteamGroupInfo.h"

FBPSteamGroupInfo::FBPSteamGroupInfo() {
    (*this).GroupName = TEXT("");
    (*this).GroupTag = TEXT("");
    (*this).numOnline = 0;
    (*this).numInGame = 0;
    (*this).numChatting = 0;
}

