#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EIGS_AIMontageBreachVariant.h"
#include "IGS_AICommand.h"
#include "IGS_AICommandBreachTakePosition.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_AICommandBreachTakePosition : public UIGS_AICommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MoveLookAtPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FinalLookAtPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_AIMontageBreachVariant MontageVariant;
    
    UIGS_AICommandBreachTakePosition();

};

