#pragma once
#include "CoreMinimal.h"
#include "IGS_GeneralReactionData_Base.h"
#include "IGS_GeneralReactionData_Actor.generated.h"

class AActor;

UCLASS(Blueprintable)
class BF_AI_API UIGS_GeneralReactionData_Actor : public UIGS_GeneralReactionData_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Actor;
    
    UIGS_GeneralReactionData_Actor();

};

