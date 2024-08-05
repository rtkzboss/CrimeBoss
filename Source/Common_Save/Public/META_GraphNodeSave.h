#pragma once
#include "CoreMinimal.h"
#include "META_GraphNodeSave.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FMETA_GraphNodeSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> Graph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NodeId;
    
    FMETA_GraphNodeSave();
};
FORCEINLINE uint32 GetTypeHash(const FMETA_GraphNodeSave) { return 0; }

