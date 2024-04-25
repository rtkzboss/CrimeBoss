#include "PlayerDeathAnimationDatabase.h"

UPlayerDeathAnimationDatabase::UPlayerDeathAnimationDatabase() {
    this->HeadPhysicalMaterial = NULL;
    this->RunVelocityThreshold = 280.00f;
    this->SleepBodyInstanceVelocityThreshold = 10.00f;
    this->ThresholdIncrement = 10.00f;
    this->ThresholdIncrementLimit = 300.00f;
    this->WakeTimeRB = 0.20f;
    this->SleepTimeRB = 0.30f;
    this->FinishingImpulseStrength = 10000.00f;
    this->ConstrainProfileName = TEXT("AnimationEnd");
    this->ZiptieConstrainProfileName = TEXT("Ziptie");
    this->VehicleVelocityThreshold = 10.00f;
    this->RagdollVelocityLimit = 1000.00f;
    this->DoorCollisionPushVelocity = 250.00f;
    this->EventInterval = 1.50f;
    this->MaxEventCalls = 10;
}


