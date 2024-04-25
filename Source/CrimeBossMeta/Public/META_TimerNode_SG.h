#pragma once
#include "CoreMinimal.h"
#include "META_TimerNodeSaveData.h"
#include "EMETA_EventTime.h"
#include "META_BaseNode_SG.h"
#include "META_TimerNode_SG.generated.h"

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UMETA_TimerNode_SG : public UMETA_BaseNode_SG {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinDaysValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDaysValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_EventTime ContinueAfter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartingDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResultValue;
    
    UMETA_TimerNode_SG();

    UFUNCTION(BlueprintCallable)
    void SetSaveData(FMETA_TimerNodeSaveData SaveData);
    
    UFUNCTION(BlueprintCallable)
    void GetSaveData(FMETA_TimerNodeSaveData& SaveData);
    
};

