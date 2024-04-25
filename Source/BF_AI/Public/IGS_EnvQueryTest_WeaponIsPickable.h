#pragma once
#include "CoreMinimal.h"
#include "IGS_EnvQueryTest_PickupBaseIsPickable.h"
#include "IGS_EnvQueryTest_WeaponIsPickable.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_EnvQueryTest_WeaponIsPickable : public UIGS_EnvQueryTest_PickupBaseIsPickable {
    GENERATED_BODY()
public:
    UIGS_EnvQueryTest_WeaponIsPickable();

};

