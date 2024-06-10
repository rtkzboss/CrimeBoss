#include "IGS_SenseHolder.h"

FIGS_SenseHolder::FIGS_SenseHolder() {
    (*this).LastSeenLocation.X = 3.402823466e+38f;
    (*this).LastSeenLocation.Y = 3.402823466e+38f;
    (*this).LastSeenLocation.Z = 3.402823466e+38f;
    (*this).OwnerLocationWhenLastSeen.X = 3.402823466e+38f;
    (*this).OwnerLocationWhenLastSeen.Y = 3.402823466e+38f;
    (*this).OwnerLocationWhenLastSeen.Z = 3.402823466e+38f;
    (*this).LastHeardLocation.X = 3.402823466e+38f;
    (*this).LastHeardLocation.Y = 3.402823466e+38f;
    (*this).LastHeardLocation.Z = 3.402823466e+38f;
    (*this).LastShotLocation.X = 3.402823466e+38f;
    (*this).LastShotLocation.Y = 3.402823466e+38f;
    (*this).LastShotLocation.Z = 3.402823466e+38f;
    (*this).LastShotDirection.X = 0.000000000e+00f;
    (*this).LastShotDirection.Y = 0.000000000e+00f;
    (*this).LastShotDirection.Z = 0.000000000e+00f;
    (*this).LastDamageTakenLocation.X = 3.402823466e+38f;
    (*this).LastDamageTakenLocation.Y = 3.402823466e+38f;
    (*this).LastDamageTakenLocation.Z = 3.402823466e+38f;
    (*this).LastKnowLocation.X = 3.402823466e+38f;
    (*this).LastKnowLocation.Y = 3.402823466e+38f;
    (*this).LastKnowLocation.Z = 3.402823466e+38f;
    (*this).SeenTimestamp = -3.402823466e+38f;
    (*this).HeardTimestamp = -3.402823466e+38f;
    (*this).ShotTimestamp = -3.402823466e+38f;
    (*this).FootstepHearedTimestamp = -3.402823466e+38f;
    (*this).FootstepTowardsPlayer = false;
    (*this).DamageTakenTimestamp = -3.402823466e+38f;
    (*this).SensedFromFriends = -3.402823466e+38f;
    (*this).LastDamageTakenSum = 0.000000000e+00f;
    (*this).DamageTakenSum = 0.000000000e+00f;
    (*this).LastSeenStrength = 0.000000000e+00f;
    (*this).IsSeen = false;
    (*this).IsSeenAndInCone = false;
    (*this).WasHeard = false;
    (*this).WasShotHeard = false;
    (*this).WasDamageTaken = false;
    (*this).StrongStimulusReceived = false;
}

