#include "AkCommunicationSettingsWithSystemInitialization.h"

FAkCommunicationSettingsWithSystemInitialization::FAkCommunicationSettingsWithSystemInitialization() {
    (*this).InitializeSystemComms = true;
}

