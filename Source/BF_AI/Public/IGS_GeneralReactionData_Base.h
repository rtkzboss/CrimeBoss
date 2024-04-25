#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "IGS_GeneralReactionData_Base.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_GeneralReactionData_Base : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UIGS_GeneralReactionData_Base();

};

