#include "AdvancedFriendsGameInstance.h"

UAdvancedFriendsGameInstance::UAdvancedFriendsGameInstance() {
    this->bCallFriendInterfaceEventsOnPlayerControllers = true;
    this->bCallIdentityInterfaceEventsOnPlayerControllers = true;
    this->bCallVoiceInterfaceEventsOnPlayerControllers = true;
    this->bEnableTalkingStatusDelegate = true;
}

bool UAdvancedFriendsGameInstance::UserPrivilegeCheckInProgress() const {
    return false;
}







