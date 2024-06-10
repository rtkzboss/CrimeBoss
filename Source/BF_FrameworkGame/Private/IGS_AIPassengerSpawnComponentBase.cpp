#include "IGS_AIPassengerSpawnComponentBase.h"
#include "ComponentInstanceDataCache.h"

UIGS_AIPassengerSpawnComponentBase::UIGS_AIPassengerSpawnComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).TeamSide = EIGS_TeamSideEnum::TS_Cops;
    (*this).CarType = EIGS_CarType::C_Unknown;
    (*this).PassangersCount.Min = 4;
    (*this).PassangersCount.Max = 4;
    (*this).PlaySpawnVoiceovers = true;
}

void UIGS_AIPassengerSpawnComponentBase::SpawnGroup(int32 inPassengersCount) {
}

void UIGS_AIPassengerSpawnComponentBase::SetCustomPassengersDefinition(const FIGS_NoSpawnPointDefinition& inCustomPassengers) {
}

void UIGS_AIPassengerSpawnComponentBase::SetAIStateInCar(AIGS_GameCharacterFramework* inPassenger) const {
}

void UIGS_AIPassengerSpawnComponentBase::MakeSpecificPassengerGetOut(int32 inPassengerIndex, int32 inSeatIndex) {
}

void UIGS_AIPassengerSpawnComponentBase::MakePassengersGetOut() {
}

int32 UIGS_AIPassengerSpawnComponentBase::GetRandomPassengerAmountInRange() {
    return 0;
}

void UIGS_AIPassengerSpawnComponentBase::AddPassengerManually(AIGS_GameCharacterFramework* inPassenger, EIGS_CarSeatVariant inSeatVariant) {
}


