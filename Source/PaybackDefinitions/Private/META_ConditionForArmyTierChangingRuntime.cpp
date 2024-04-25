#include "META_ConditionForArmyTierChangingRuntime.h"

FMETA_ConditionForArmyTierChangingRuntime::FMETA_ConditionForArmyTierChangingRuntime() {
    this->CurrentArmyTier = EMETA_ArmyTier::Low;
    this->CurrentTurfsAmountUnderControl = 0;
    this->WhatHappenedWithTurfAmount = EMETA_UnaryOperation::Increment;
    this->ArmyTierAction = EMETA_UnaryOperation::Increment;
    this->OwnerGang = EMETA_Gang::None;
}

