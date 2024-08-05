#pragma once
#include "CoreMinimal.h"
#include "IGS_AISettingsComponent.h"
#include "IGS_CombatRangeSettingsInterface.h"
#include "IGS_CoverSettingsInterface.h"
#include "IGS_MeleeWeaponActivationSettingsInterface.h"
#include "IGS_ReactionsSettingsInterface.h"
#include "IGS_ThrowableWeaponSettingsInterface.h"
#include "IGS_WeaponSettingsInterface.h"
#include "IGS_AISwatSettingsComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_AISwatSettingsComponent : public UIGS_AISettingsComponent, public IIGS_MeleeWeaponActivationSettingsInterface, public IIGS_WeaponSettingsInterface, public IIGS_CombatRangeSettingsInterface, public IIGS_CoverSettingsInterface, public IIGS_ReactionsSettingsInterface, public IIGS_ThrowableWeaponSettingsInterface {
    GENERATED_BODY()
public:
    UIGS_AISwatSettingsComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

