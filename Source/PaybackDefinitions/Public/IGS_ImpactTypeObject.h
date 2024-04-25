#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EIGS_WoundType.h"
#include "IGS_ImpactTypeObject.generated.h"

class UAkSwitchValue;

UCLASS(Abstract, Blueprintable)
class PAYBACKDEFINITIONS_API UIGS_ImpactTypeObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* SwitchValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldSpawnBloodImpacts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_WoundType WoundType;
    
    UIGS_ImpactTypeObject();

};

