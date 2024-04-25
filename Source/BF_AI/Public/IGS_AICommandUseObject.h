#pragma once
#include "CoreMinimal.h"
#include "IGS_AICommand.h"
#include "IGS_AICommandUseObject.generated.h"

class AActor;

UCLASS(Blueprintable)
class BF_AI_API UIGS_AICommandUseObject : public UIGS_AICommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ObjectToUse;
    
    UIGS_AICommandUseObject();

};

