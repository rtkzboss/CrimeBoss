#pragma once
#include "CoreMinimal.h"
#include "META_LoopBranchNodeSaveData.h"
#include "META_BaseNode_SG.h"
#include "META_LoopBranchNode.generated.h"

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UMETA_LoopBranchNode : public UMETA_BaseNode_SG {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountOfActivations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentAmountOfActivation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LimitExceededNodeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ContinueNodeId;
    
    UMETA_LoopBranchNode();

    UFUNCTION(BlueprintCallable)
    void SetSaveData(FMETA_LoopBranchNodeSaveData SaveData);
    
    UFUNCTION(BlueprintCallable)
    void GetSaveData(FMETA_LoopBranchNodeSaveData& SaveData);
    
};

