#pragma once
#include "CoreMinimal.h"
#include "EIGS_InputAction.h"
#include "Engine/DeveloperSettings.h"
#include "EMETA_ItemQuality.h"
#include "IGS_UITileQualityColors.h"
#include "IGS_GameUISettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class BF_FRAMEWORKGAME_API UIGS_GameUISettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EIGS_InputAction> AllowedMenuInputActions;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeftThumbstickMenuThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_ItemQuality, FIGS_UITileQualityColors> UITileQualityColors;
    
    UIGS_GameUISettings();

};

