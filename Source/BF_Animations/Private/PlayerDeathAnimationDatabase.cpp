#include "PlayerDeathAnimationDatabase.h"

UPlayerDeathAnimationDatabase::UPlayerDeathAnimationDatabase() {
    (*this).RunVelocityThreshold = 2.800000000e+02f;
    (*this).SleepBodyInstanceVelocityThreshold = 1.000000000e+01f;
    (*this).ThresholdIncrement = 1.000000000e+01f;
    (*this).ThresholdIncrementLimit = 3.000000000e+02f;
    (*this).WakeTimeRB = 2.000000030e-01f;
    (*this).SleepTimeRB = 3.000000119e-01f;
    (*this).FinishingImpulseStrength = 1.000000000e+04f;
    (*this).ConstrainProfileName = TEXT("AnimationEnd");
    (*this).ZiptieConstrainProfileName = TEXT("Ziptie");
    (*this).VehicleVelocityThreshold = 1.000000000e+01f;
    (*this).RagdollVelocityLimit = 1.000000000e+03f;
    (*this).DoorCollisionPushVelocity = 2.500000000e+02f;
    (*this).EventInterval = 1.500000000e+00f;
    (*this).MaxEventCalls = 10;
}


