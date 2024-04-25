#pragma once
#include "CoreMinimal.h"
#include "EMETA_ActionCardStrength.h"
#include "META_ActionCardID.generated.h"

class UMETA_BaseActionCard;

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_ActionCardID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMETA_BaseActionCard> ActionCard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_ActionCardStrength Strength;
    
    FMETA_ActionCardID();
};
FORCEINLINE uint32 GetTypeHash(const FMETA_ActionCardID) { return 0; }

