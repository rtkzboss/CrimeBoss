#pragma once
#include "CoreMinimal.h"
#include "META_DetectivesInvestigationConfig.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_DetectivesInvestigationConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountOfDetectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountOfTurfsWillBeNeutralizedByEachDetective;
    
    FMETA_DetectivesInvestigationConfig();
};

