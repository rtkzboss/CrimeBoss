#pragma once
#include "CoreMinimal.h"
#include "IGS_BTTask_FireBase.h"
#include "IGS_BTTask_FireInFrontOfMove.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTTask_FireInFrontOfMove : public UIGS_BTTask_FireBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FireTime;
    
public:
    UIGS_BTTask_FireInFrontOfMove();

};

