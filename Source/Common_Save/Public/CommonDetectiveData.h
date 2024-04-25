#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CommonDetectiveData.generated.h"

class UMETA_DetectiveID;

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FCommonDetectiveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMETA_DetectiveID> DetectiveID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasSpawned;
    
    FCommonDetectiveData();
};

