#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "AfraidOfDanger.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FAfraidOfDanger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericTeamId GenericTeamId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 DamageTypeFlags;
    
    BF_FRAMEWORKBASE_API FAfraidOfDanger();
};

