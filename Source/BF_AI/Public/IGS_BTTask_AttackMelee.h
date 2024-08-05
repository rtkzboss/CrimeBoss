#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "IGS_BTTask_AttackMelee.generated.h"

class AIGS_IntelligentGameCharacter;
class AIGS_MeleeWeaponBase;

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTTask_AttackMelee : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_IntelligentGameCharacter* AIGameCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_MeleeWeaponBase* Weapon;
    
public:
    UIGS_BTTask_AttackMelee();

};

