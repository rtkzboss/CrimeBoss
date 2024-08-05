#include "IGS_CoverSystem.h"

UIGS_CoverSystem::UIGS_CoverSystem() {
}

void UIGS_CoverSystem::WaitAndValidateCovers(const UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void UIGS_CoverSystem::ReleaseCover(UCoverPoint* inCoverPoint, UObject* inWorldContextObject) {
}

void UIGS_CoverSystem::ReachedCover(UCoverPoint* inCoverPoint, AController* InController) {
}

bool UIGS_CoverSystem::OccupyCover(UCoverPoint* inCoverPoint, AController* InController) {
    return false;
}


