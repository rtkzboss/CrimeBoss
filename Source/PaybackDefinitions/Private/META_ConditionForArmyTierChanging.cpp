#include "META_ConditionForArmyTierChanging.h"

FMETA_ConditionForArmyTierChanging::FMETA_ConditionForArmyTierChanging() {
    (*this).CurrentArmyTier = EMETA_ArmyTier::Low;
    (*this).CurrentTurfsAmountUnderControlInterval.Min = 0;
    (*this).CurrentTurfsAmountUnderControlInterval.Max = 0;
    (*this).WhatHappenedWithTurfAmount = EMETA_UnaryOperation::Increment;
    (*this).ArmyTierAction = EMETA_UnaryOperation::Increment;
    (*this).OwnerGang = EMETA_Gang::None;
}

