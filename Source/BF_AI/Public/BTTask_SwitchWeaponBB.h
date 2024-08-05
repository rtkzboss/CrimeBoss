#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_SwitchWeaponBase.h"
#include "BTTask_SwitchWeaponBB.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTTask_SwitchWeaponBB : public UBTTask_SwitchWeaponBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector DesiredWeaponKey;
    
public:
    UBTTask_SwitchWeaponBB();

};

