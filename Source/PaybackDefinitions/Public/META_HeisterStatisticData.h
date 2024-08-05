#pragma once
#include "CoreMinimal.h"
#include "META_CharacterID.h"
#include "META_HeisterSpecialData.h"
#include "META_HeisterStatisticData.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_HeisterStatisticData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_CharacterID HeisterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_HeisterSpecialData HeisterSpecialData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Statuses;
    
    FMETA_HeisterStatisticData();
};

