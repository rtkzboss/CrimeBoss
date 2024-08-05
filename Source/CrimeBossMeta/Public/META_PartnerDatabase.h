#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EMETA_Partner.h"
#include "META_PartnerTableRow.h"
#include "META_PartnerDatabase.generated.h"

class UObject;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UMETA_PartnerDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UMETA_PartnerDatabase();

    UFUNCTION(BlueprintCallable)
    static FMETA_PartnerTableRow GetPartnerData(UObject* inWCO, const EMETA_Partner inPartner, bool& outSucceeded);
    
};

