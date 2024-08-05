#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_ControlRigBase.generated.h"

class UControlRig;

UCLASS(Blueprintable)
class BF_ANIMATIONS_API UIGS_ControlRigBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UControlRig* ControlRig;
    
    UIGS_ControlRigBase();

};

