#pragma once
#include "CoreMinimal.h"
#include "EMETA_Partner.h"
#include "META_PartnerInfo.h"
#include "META_PartnerInfoChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMETA_PartnerInfoChanged, EMETA_Partner, Partner, FMETA_PartnerInfo, Info);

