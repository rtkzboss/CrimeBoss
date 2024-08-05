#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_SwitchWeaponCustom.generated.h"

class UIGS_MeleeWeaponInventoryObject;

UCLASS(Blueprintable)
class BF_AI_API UBTTask_SwitchWeaponCustom : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_MeleeWeaponInventoryObject* WeaponDefinition;
    
    UBTTask_SwitchWeaponCustom();

};

