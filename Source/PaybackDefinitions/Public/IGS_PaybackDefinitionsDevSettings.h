#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "IGS_PaybackDefinitionsDevSettings.generated.h"

class UIGS_MissionNamesDatabase;
class UMETA_BossLevelData;
class UMETA_CommonData;
class UMETA_DebugData;
class UMETA_GenericCharactersNames;
class UMETA_GraphsData;
class UMETA_TurfWarData;
class UMETA_VoiceoverDialogueSettings;
class UPaybackCoreMapsData;

UCLASS(Blueprintable, DefaultConfig, Config="DeveloperSettings/Dev_PaybackDefinitionsSettings")
class PAYBACKDEFINITIONS_API UIGS_PaybackDefinitionsDevSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPaybackCoreMapsData> CoreMapsDataAsset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMETA_BossLevelData> MetaBossLevelDataAsset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMETA_CommonData> MetaCommonDataDataAsset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMETA_DebugData> MetaDebugDataAsset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMETA_GraphsData> MetaGraphsDataAsset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMETA_TurfWarData> MetaTurfWarDataAsset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMETA_VoiceoverDialogueSettings> MetaVODialogueSettingsDataAsset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UIGS_MissionNamesDatabase> MissionNamesDataAsset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMETA_GenericCharactersNames> GenericCharactersNamesDataAsset;
    
    UIGS_PaybackDefinitionsDevSettings();

};

