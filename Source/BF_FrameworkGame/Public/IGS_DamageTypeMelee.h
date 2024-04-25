#pragma once
#include "CoreMinimal.h"
#include "IGS_DamageTypeBase.h"
#include "EDamageMeleeType.h"
#include "IGS_DamageTypeMelee.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_DamageTypeMelee : public UIGS_DamageTypeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageMeleeType DamageMeleeType;
    
    UIGS_DamageTypeMelee();

};

