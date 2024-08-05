#pragma once
#include "CoreMinimal.h"
#include "IGS_AISettingsComponent.h"
#include "IGS_CombatRangeSettingsInterface.h"
#include "IGS_CoverSettingsInterface.h"
#include "IGS_ReactionsSettingsInterface.h"
#include "IGS_SniperWeaponSettingsInterface.h"
#include "IGS_AISniperSettingsComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_AISniperSettingsComponent : public UIGS_AISettingsComponent, public IIGS_SniperWeaponSettingsInterface, public IIGS_CombatRangeSettingsInterface, public IIGS_CoverSettingsInterface, public IIGS_ReactionsSettingsInterface {
    GENERATED_BODY()
public:
    UIGS_AISniperSettingsComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

