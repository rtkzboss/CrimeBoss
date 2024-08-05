#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_AICommandBreachRemoveObstacle.h"
#include "IGS_AICommandBreachRemoveGate.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_AICommandBreachRemoveGate : public UIGS_AICommandBreachRemoveObstacle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LookAtPosition;
    
    UIGS_AICommandBreachRemoveGate();

};

