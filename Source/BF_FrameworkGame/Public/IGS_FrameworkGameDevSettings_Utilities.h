#pragma once
#include "CoreMinimal.h"
#include "IGS_FrameworkGameDevSettings_Base.h"
#include "IGS_FrameworkGameDevSettings_Utilities.generated.h"

class UIGS_LevelBlockingBoundsSettings;
class UIGS_PressureManagerData;
class UIGS_WaveManagerData;
class UMaterialInterface;
class UMaterialParameterCollection;
class USoundBase;

UCLASS(Blueprintable, Config=Engine)
class BF_FRAMEWORKGAME_API UIGS_FrameworkGameDevSettings_Utilities : public UIGS_FrameworkGameDevSettings_Base {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> UnderWaterClearMaterial;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> UnderWaterDeepBlueMaterial;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> UnderWaterLakeMaterial;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> UnderWaterLoopSound;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UIGS_LevelBlockingBoundsSettings> LevelBlockingBoundsSettings;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UIGS_WaveManagerData> WaveManagerData;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UIGS_PressureManagerData> PressureManagerData;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialParameterCollection> WeatherMPC;
    
    UIGS_FrameworkGameDevSettings_Utilities();

};

