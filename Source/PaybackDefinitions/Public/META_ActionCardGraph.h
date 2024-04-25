#pragma once
#include "CoreMinimal.h"
#include "EMETA_ActionCardStrength.h"
#include "META_ActionCardGraph.generated.h"

class UMETA_BaseActionCard;

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_ActionCardGraph {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMETA_BaseActionCard> ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_ActionCardStrength Strength;
    
    FMETA_ActionCardGraph();
};

