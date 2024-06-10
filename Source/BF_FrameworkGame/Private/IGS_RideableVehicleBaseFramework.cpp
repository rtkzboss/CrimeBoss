#include "IGS_RideableVehicleBaseFramework.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"

AIGS_RideableVehicleBaseFramework::AIGS_RideableVehicleBaseFramework(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

int32 AIGS_RideableVehicleBaseFramework::GetSeatIndexForPawn(AIGS_GameCharacterFramework* inCharacter) const {
    return 0;
}

int32 AIGS_RideableVehicleBaseFramework::GetLocalSeatIndex() const {
    return 0;
}


