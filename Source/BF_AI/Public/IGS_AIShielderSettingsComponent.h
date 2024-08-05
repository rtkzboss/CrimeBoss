#pragma once
#include "CoreMinimal.h"
#include "IGS_AISettingsComponent.h"
#include "IGS_CombatRangeSettingsInterface.h"
#include "IGS_MeleeWeaponActivationSettingsInterface.h"
#include "IGS_ShielderSettingsInterface.h"
#include "IGS_WeaponSettingsInterface.h"
#include "IGS_AIShielderSettingsComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_AIShielderSettingsComponent : public UIGS_AISettingsComponent, public IIGS_CombatRangeSettingsInterface, public IIGS_WeaponSettingsInterface, public IIGS_MeleeWeaponActivationSettingsInterface, public IIGS_ShielderSettingsInterface {
    GENERATED_BODY()
public:
    UIGS_AIShielderSettingsComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

