#pragma once
#include "CoreMinimal.h"
#include "IGS_ReviveRecord.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_AICommandBeingRevived;
class UIGS_AICommandRevive;

USTRUCT(BlueprintType)
struct BF_AI_API FIGS_ReviveRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AIGS_GameCharacterFramework> InjuredCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_AICommandBeingRevived* BeingRevivedCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AIGS_GameCharacterFramework> RevivingCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_AICommandRevive* RevivingCommand;
    
    FIGS_ReviveRecord();
};

