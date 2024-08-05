#pragma once
#include "CoreMinimal.h"
#include "IGS_FrameworkGameDevSettings_Base.h"
#include "IGS_FrameworkGameDevSettings.generated.h"

class AIGS_PlayerFPVArms;
class UCurveFloat;
class UCurveTable;
class UDataTable;
class UForceFeedbackEffect;
class UIGS_CarryableInventoryObject;
class UIGS_DamageTypeFallDamage;
class UIGS_ImpactTypeObject;
class UIGS_PickupClassesData;
class UIGS_StealthSettings;
class UIGS_StealthVoiceovers;
class UIGS_SuspicionOffenceDataTablesAsset;

UCLASS(Blueprintable, Config=Engine)
class BF_FRAMEWORKGAME_API UIGS_FrameworkGameDevSettings : public UIGS_FrameworkGameDevSettings_Base {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> AmmoBoxDataTable;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> AmmoBoxSpawnDataTable;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UForceFeedbackEffect> WeaponPlaceholderForceFeedback;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCurveTable> PlayerSettingsCurveTable;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UIGS_ImpactTypeObject> KillConfirmedParticleClass;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCurveFloat> FallDamageCurve;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UIGS_DamageTypeFallDamage> FallDamageType;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UIGS_CarryableInventoryObject> BodyBagCarryableClass;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UIGS_PickupClassesData> PickupClassesData;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AIGS_PlayerFPVArms> DefaultArmsClass;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UIGS_StealthSettings> StealthSettingsDataAsset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UIGS_StealthVoiceovers> StealthVoiceoversDataAsset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UIGS_SuspicionOffenceDataTablesAsset> OffenceTablesDataAsset;
    
    UIGS_FrameworkGameDevSettings();

};

