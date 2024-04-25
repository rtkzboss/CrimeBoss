#include "IGS_LevelGeneratorSubsystem.h"

UIGS_LevelGeneratorSubsystem::UIGS_LevelGeneratorSubsystem() {
    this->bIsBuildingFinished = false;
}

UIGS_LevelGeneratorSubsystem* UIGS_LevelGeneratorSubsystem::Instance(const UObject* inWorldContextObject) {
    return NULL;
}

void UIGS_LevelGeneratorSubsystem::InitializeRooms_Server(ANavigationData* inNavData) {
}

int32 UIGS_LevelGeneratorSubsystem::GetDefaultSeed() const {
    return 0;
}


