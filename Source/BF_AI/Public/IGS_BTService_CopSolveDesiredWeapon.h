#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTService_CopSolveDesiredWeapon.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTService_CopSolveDesiredWeapon : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector MeleeTypeKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector DesiredWeaponKey;
    
public:
    UIGS_BTService_CopSolveDesiredWeapon();

};

