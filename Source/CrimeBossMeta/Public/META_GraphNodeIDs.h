#pragma once
#include "CoreMinimal.h"
#include "META_GraphNodeIDs.generated.h"

USTRUCT(BlueprintType)
struct CRIMEBOSSMETA_API FMETA_GraphNodeIDs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> NodeIDs;
    
    FMETA_GraphNodeIDs();
};

