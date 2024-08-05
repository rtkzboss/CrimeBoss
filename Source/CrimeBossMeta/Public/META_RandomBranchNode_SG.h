#pragma once
#include "CoreMinimal.h"
#include "META_BaseNode_SG.h"
#include "META_RandomWayChance.h"
#include "META_RandomBranchNode_SG.generated.h"

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UMETA_RandomBranchNode_SG : public UMETA_BaseNode_SG {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_RandomWayChance> WaysChances;
    
    UMETA_RandomBranchNode_SG();

};

