#pragma once
#include "CoreMinimal.h"
#include "IGS_BTTask_MoveToBase.h"
#include "BTTask_MoveToWithRepath.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTTask_MoveToWithRepath : public UIGS_BTTask_MoveToBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RefreshTimeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RefreshTimeMax;
    
public:
    UBTTask_MoveToWithRepath();

};

