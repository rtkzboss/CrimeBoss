#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EMETA_Gang.h"
#include "META_GangTableRow.h"
#include "META_GangDatabase.generated.h"

class UObject;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UMETA_GangDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UMETA_GangDatabase();

    UFUNCTION(BlueprintCallable)
    static FMETA_GangTableRow GetGangData(UObject* inWCO, const EMETA_Gang inGang, bool& outSucceeded);
    
};

