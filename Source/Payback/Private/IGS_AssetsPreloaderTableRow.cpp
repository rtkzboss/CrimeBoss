#include "IGS_AssetsPreloaderTableRow.h"

FIGS_AssetsPreloaderTableRow::FIGS_AssetsPreloaderTableRow() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
    (*this).CopsVariationTypes.Empty();
    (*this).SWATVariationTypes.Empty();
    (*this).GangstersVariationTypes.Empty();
    (*this).VehicleTypes.Empty();
    (*this).PreloadBackupHeisters = false;
    (*this).PreloadRobots = false;
    (*this).AdditionalClasses.Empty();
    (*this).AdditionalObjects.Empty();
    (*this).PoolDatabases.Empty();
}

