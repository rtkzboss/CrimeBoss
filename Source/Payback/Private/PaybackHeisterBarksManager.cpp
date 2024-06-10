#include "PaybackHeisterBarksManager.h"
#include "ComponentInstanceDataCache.h"

UPaybackHeisterBarksManager::UPaybackHeisterBarksManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).SilenceMinHeisterShootingTime = 2.000000000e+01f;
    (*this).SilenceWithoutShooting = 5.000000000e+00f;
    (*this).OutnumberedEnemies = 6;
    (*this).OutnumberedCoolDown = 1.500000000e+01f;
    (*this).PrimaryComponentTick.bCanEverTick = true;
    (*this).PrimaryComponentTick.TickInterval = 5.000000000e-01f;
}



































