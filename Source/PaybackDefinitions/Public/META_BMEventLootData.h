#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "META_BMEventLootData.generated.h"

class UMETA_MissionID;

USTRUCT(BlueprintType)
struct FMETA_BMEventLootData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinLootValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMETA_MissionID> MissionID;
    
    PAYBACKDEFINITIONS_API FMETA_BMEventLootData();
};

