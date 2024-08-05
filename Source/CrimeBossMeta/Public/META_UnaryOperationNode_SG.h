#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_UnaryOperation.h"
#include "META_BaseNode_SG.h"
#include "META_UnaryOperationNode_SG.generated.h"

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UMETA_UnaryOperationNode_SG : public UMETA_BaseNode_SG {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_UnaryOperation UnaryOperation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GraphVariable;
    
    UMETA_UnaryOperationNode_SG();

};

