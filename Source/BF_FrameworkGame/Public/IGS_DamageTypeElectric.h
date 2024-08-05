#pragma once
#include "CoreMinimal.h"
#include "IGS_DamageTypeElemental.h"
#include "IGS_DamageTypeElectric.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_DamageTypeElectric : public UIGS_DamageTypeElemental {
    GENERATED_BODY()
public:
    UIGS_DamageTypeElectric();

};

