#include "IGS_AssetsPreloaderTableRow.h"

FIGS_AssetsPreloaderTableRow::FIGS_AssetsPreloaderTableRow() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
    auto& gen3472 = (*this).CopsVariationTypes;
    gen3472.Empty();
    auto& gen3473 = (*this).SWATVariationTypes;
    gen3473.Empty();
    auto& gen3474 = (*this).GangstersVariationTypes;
    gen3474.Empty();
    auto& gen3475 = (*this).VehicleTypes;
    gen3475.Empty();
    (*this).PreloadBackupHeisters = false;
    (*this).PreloadRobots = false;
    auto& gen3476 = (*this).AdditionalClasses;
    gen3476.Empty();
    auto& gen3477 = (*this).AdditionalObjects;
    gen3477.Empty();
    auto& gen3478 = (*this).PoolDatabases;
    gen3478.Empty();
}

