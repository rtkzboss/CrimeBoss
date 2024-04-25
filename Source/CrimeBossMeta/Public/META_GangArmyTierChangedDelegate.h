#pragma once
#include "CoreMinimal.h"
#include "EMETA_ArmyTier.h"
#include "EMETA_Gang.h"
#include "META_GangArmyTierChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMETA_GangArmyTierChanged, EMETA_Gang, Gang, EMETA_ArmyTier, ArmyTier);

