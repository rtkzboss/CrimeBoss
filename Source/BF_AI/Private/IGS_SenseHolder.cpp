#include "IGS_SenseHolder.h"

FIGS_SenseHolder::FIGS_SenseHolder() {
    this->SeenTimestamp = 0.00f;
    this->HeardTimestamp = 0.00f;
    this->ShotTimestamp = 0.00f;
    this->FootstepHearedTimestamp = 0.00f;
    this->FootstepTowardsPlayer = false;
    this->DamageTakenTimestamp = 0.00f;
    this->SensedFromFriends = 0.00f;
    this->LastDamageTakenSum = 0.00f;
    this->DamageTakenSum = 0.00f;
    this->LastSeenStrength = 0.00f;
    this->IsSeen = false;
    this->IsSeenAndInCone = false;
    this->WasHeard = false;
    this->WasShotHeard = false;
    this->WasDamageTaken = false;
    this->StrongStimulusReceived = false;
}

