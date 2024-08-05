#pragma once
#include "CoreMinimal.h"
#include "EMETA_Gang.h"
#include "META_GangTurfHistory.h"
#include "META_TurfHistory.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_TurfHistory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_Gang, FMETA_GangTurfHistory> GangTurfHistory;
    
    FMETA_TurfHistory();
};

