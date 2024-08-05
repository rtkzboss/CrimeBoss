#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTService_CarryablePickupSequence.generated.h"

class AIGS_GameCharacterFramework;

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTService_CarryablePickupSequence : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector BestCarryablePickup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_GameCharacterFramework*> m_HelpersCharacters;
    
public:
    UIGS_BTService_CarryablePickupSequence();

};

