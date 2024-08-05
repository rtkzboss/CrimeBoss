#pragma once
#include "CoreMinimal.h"
#include "IGS_BTTask_FireBase.h"
#include "IGS_BTTask_FireOffsetToCenter.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTTask_FireOffsetToCenter : public UIGS_BTTask_FireBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FireTime;
    
public:
    UIGS_BTTask_FireOffsetToCenter();

};

