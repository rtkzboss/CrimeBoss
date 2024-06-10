#include "IGS_IdleChatterEventNotificationData.h"

FIGS_IdleChatterEventNotificationData::FIGS_IdleChatterEventNotificationData() {
    (*this).AsyncRequest = nullptr;
    auto& gen3077 = (*this).Characters;
    gen3077.Empty();
}

