#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "META_MissingHeisterEventData.generated.h"

class UMETA_MissionID;

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_MissingHeisterEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EventID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMETA_MissionID> MissionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DaysLeftUntilEvent;
    
    FMETA_MissingHeisterEventData();
};

