#include "IGS_SuspicionComponentHolder.h"

FIGS_SuspicionComponentHolder::FIGS_SuspicionComponentHolder() {
    (*this).SenseHolder.LastSeenLocation.X = 3.402823466e+38f;
    (*this).SenseHolder.LastSeenLocation.Y = 3.402823466e+38f;
    (*this).SenseHolder.LastSeenLocation.Z = 3.402823466e+38f;
    (*this).SenseHolder.OwnerLocationWhenLastSeen.X = 3.402823466e+38f;
    (*this).SenseHolder.OwnerLocationWhenLastSeen.Y = 3.402823466e+38f;
    (*this).SenseHolder.OwnerLocationWhenLastSeen.Z = 3.402823466e+38f;
    (*this).SenseHolder.LastHeardLocation.X = 3.402823466e+38f;
    (*this).SenseHolder.LastHeardLocation.Y = 3.402823466e+38f;
    (*this).SenseHolder.LastHeardLocation.Z = 3.402823466e+38f;
    (*this).SenseHolder.LastShotLocation.X = 3.402823466e+38f;
    (*this).SenseHolder.LastShotLocation.Y = 3.402823466e+38f;
    (*this).SenseHolder.LastShotLocation.Z = 3.402823466e+38f;
    (*this).SenseHolder.LastShotDirection.X = 0.000000000e+00f;
    (*this).SenseHolder.LastShotDirection.Y = 0.000000000e+00f;
    (*this).SenseHolder.LastShotDirection.Z = 0.000000000e+00f;
    (*this).SenseHolder.LastDamageTakenLocation.X = 3.402823466e+38f;
    (*this).SenseHolder.LastDamageTakenLocation.Y = 3.402823466e+38f;
    (*this).SenseHolder.LastDamageTakenLocation.Z = 3.402823466e+38f;
    (*this).SenseHolder.LastKnowLocation.X = 3.402823466e+38f;
    (*this).SenseHolder.LastKnowLocation.Y = 3.402823466e+38f;
    (*this).SenseHolder.LastKnowLocation.Z = 3.402823466e+38f;
    (*this).SenseHolder.SeenTimestamp = -3.402823466e+38f;
    (*this).SenseHolder.HeardTimestamp = -3.402823466e+38f;
    (*this).SenseHolder.ShotTimestamp = -3.402823466e+38f;
    (*this).SenseHolder.FootstepHearedTimestamp = -3.402823466e+38f;
    (*this).SenseHolder.FootstepTowardsPlayer = false;
    (*this).SenseHolder.DamageTakenTimestamp = -3.402823466e+38f;
    (*this).SenseHolder.SensedFromFriends = -3.402823466e+38f;
    (*this).SenseHolder.LastDamageTakenSum = 0.000000000e+00f;
    (*this).SenseHolder.DamageTakenSum = 0.000000000e+00f;
    (*this).SenseHolder.LastSeenStrength = 0.000000000e+00f;
    (*this).SenseHolder.IsSeen = false;
    (*this).SenseHolder.IsSeenAndInCone = false;
    (*this).SenseHolder.WasHeard = false;
    (*this).SenseHolder.WasShotHeard = false;
    (*this).SenseHolder.WasDamageTaken = false;
    (*this).SenseHolder.StrongStimulusReceived = false;
}

