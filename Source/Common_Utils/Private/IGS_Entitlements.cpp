#include "IGS_Entitlements.h"

UIGS_Entitlements::UIGS_Entitlements() {
}

bool UIGS_Entitlements::UserEntitledTo(FGameplayTag inEntitlementTag) {
    return false;
}

bool UIGS_Entitlements::RequiresCampaignRestart(FGameplayTag inEntitlementTag) {
    return false;
}

void UIGS_Entitlements::Refresh() {
}

bool UIGS_Entitlements::OpenStore(const UObject* inWCO, FGameplayTag inEntitlementTag) {
    return false;
}

void UIGS_Entitlements::LoadDebugEntitlements() {
}

bool UIGS_Entitlements::IsEntitlementDLC(FGameplayTag inEntitlement) const {
    return false;
}

TArray<FGameplayTag> UIGS_Entitlements::GetOwnedEntitlements() {
    return TArray<FGameplayTag>();
}

void UIGS_Entitlements::GetEntitlementTitle(UObject* inWCO, const FGameplayTag inEntitlement, FText& OutText) {
}

TArray<FGameplayTag> UIGS_Entitlements::GetAllEntitlements() {
    return TArray<FGameplayTag>();
}

void UIGS_Entitlements::Connect() {
}

void UIGS_Entitlements::AddDebugEntitlement(FGameplayTag inEntitlement) {
}


