#include "IGS_SubControllerHuman.h"
#include "ComponentInstanceDataCache.h"

UIGS_SubControllerHuman::UIGS_SubControllerHuman(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PrimaryComponentTick.bCanEverTick = true;
}

void UIGS_SubControllerHuman::OnMoveModeChanged(ACharacter* inCharacter, TEnumAsByte<EMovementMode> inPrevMovementMode, uint8 inPreviousCustomMode) {
}

void UIGS_SubControllerHuman::MessageToServer_StopUsingVehicle_Implementation() {
}


