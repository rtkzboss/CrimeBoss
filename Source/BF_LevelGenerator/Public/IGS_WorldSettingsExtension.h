#pragma once
#include "CoreMinimal.h"
#include "GameFramework/WorldSettings.h"
#include "IGS_BuiltDataWorldSetting.h"
#include "IGS_LightingScenarioWorldSettings.h"
#include "IGS_WorldSettingsExtension.generated.h"

UCLASS(Blueprintable)
class BF_LEVELGENERATOR_API AIGS_WorldSettingsExtension : public AWorldSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_BuiltDataWorldSetting LightingBuildSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_LightingScenarioWorldSettings LightingScenarioWorldSettings;
    
    AIGS_WorldSettingsExtension(const FObjectInitializer& ObjectInitializer);

};

