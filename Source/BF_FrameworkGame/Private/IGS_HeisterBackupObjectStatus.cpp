#include "IGS_HeisterBackupObjectStatus.h"
#include "EIGS_HealthState.h"
#include "ComponentInstanceDataCache.h"

UIGS_HeisterBackupObjectStatus::UIGS_HeisterBackupObjectStatus(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).HealthMultiplierAttribute = 1.000000000e+00f;
    (*this).HealthRegenDelayAttribute = 1.000000000e+00f;
}


