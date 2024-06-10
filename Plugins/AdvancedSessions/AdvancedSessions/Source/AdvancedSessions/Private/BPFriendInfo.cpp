#include "BPFriendInfo.h"

FBPFriendInfo::FBPFriendInfo() {
    (*this).DisplayName = TEXT("");
    (*this).RealName = TEXT("");
    (*this).OnlineState = EBPOnlinePresenceState::Offline;
    (*this).bIsPlayingSameGame = false;
    (*this).PresenceInfo.bIsOnline = false;
    (*this).PresenceInfo.bIsPlaying = false;
    (*this).PresenceInfo.bIsPlayingThisGame = false;
    (*this).PresenceInfo.bIsJoinable = false;
    (*this).PresenceInfo.bHasVoiceSupport = false;
    (*this).PresenceInfo.PresenceState = EBPOnlinePresenceState::Offline;
    (*this).PresenceInfo.StatusString = TEXT("");
}

