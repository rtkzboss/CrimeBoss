#pragma once
#include "CoreMinimal.h"
#include "IGS_BTTask_FireBase.h"
#include "IGS_BTTask_BlindFire.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTTask_BlindFire : public UIGS_BTTask_FireBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UIGS_BTTask_BlindFire();

};

