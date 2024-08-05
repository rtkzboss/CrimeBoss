#include "IGS_RichPresenceLocalizationHelper.h"
#include "Templates/SubclassOf.h"

UIGS_RichPresenceLocalizationHelper::UIGS_RichPresenceLocalizationHelper() {
}

FText UIGS_RichPresenceLocalizationHelper::GetMissionName(const UObject* WCO, FGameplayTag MissionTag, bool& Succeeded) {
    return FText::GetEmpty();
}

FText UIGS_RichPresenceLocalizationHelper::GetChainName(const UObject* WCO, TSubclassOf<UIGS_ChainContractID> ChainID, bool& Succeeded) {
    return FText::GetEmpty();
}


