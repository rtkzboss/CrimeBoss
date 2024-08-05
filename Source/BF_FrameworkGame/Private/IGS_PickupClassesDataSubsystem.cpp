#include "IGS_PickupClassesDataSubsystem.h"
#include "IGS_PickupClassesData.h"

UIGS_PickupClassesDataSubsystem::UIGS_PickupClassesDataSubsystem() {
    static ConstructorHelpers::FObjectFinder<UIGS_PickupClassesData> gen0(TEXT("/Game/00_Main/Pickups/DA_PickupClassesData.DA_PickupClassesData"));
    (*this).PickupClasses = gen0.Object;
}


