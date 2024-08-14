#include "IGS_HordeModeManager.h"
#include "ComponentInstanceDataCache.h"
#include "Net/UnrealNetwork.h"

UIGS_HordeModeManager::UIGS_HordeModeManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UIGS_HordeModeManager::SetHordeModeCounterValues(const UObject* inWCO, int32 inTotalValue, float inCurrentProgress) {
}

void UIGS_HordeModeManager::SetHordeModeActive(const UObject* inWCO, bool Inactive) {
}

void UIGS_HordeModeManager::OnRep_HordeModeValues(FIGS_HordeModeValues inOldValues) {
}

void UIGS_HordeModeManager::OnRep_HordeModeActive(bool inOldHordeModeActive) {
}

void UIGS_HordeModeManager::AddTokensToAllPlayers(const UObject* inWCO, int32 inTokensCount) {
}

void UIGS_HordeModeManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_HordeModeManager, bIsHordeModeActive);
    DOREPLIFETIME(UIGS_HordeModeManager, HordeModeValues);
}


