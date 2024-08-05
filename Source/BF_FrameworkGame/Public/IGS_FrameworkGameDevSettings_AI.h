#pragma once
#include "CoreMinimal.h"
#include "IGS_FrameworkGameDevSettings_Base.h"
#include "IGS_FrameworkGameDevSettings_AI.generated.h"

class UAISense;
class UIGS_AIDatabaseFPS;
class UIGS_AISpawnPointData;
class UIGS_AISpawnerData;
class UIGS_SquadClassesHolder;
class UIGS_TerritoryData;
class UMaterial;

UCLASS(Blueprintable, Config=Engine)
class BF_FRAMEWORKGAME_API UIGS_FrameworkGameDevSettings_AI : public UIGS_FrameworkGameDevSettings_Base {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UIGS_AISpawnerData> AISpawnerData;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UIGS_AIDatabaseFPS> AIDatabaseFPS;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UIGS_AISpawnPointData> AISpawnPointData;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterial> AISpawnPointMaterial;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UIGS_TerritoryData> TerritoryData;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UIGS_SquadClassesHolder> SquadClassesHolder;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAISense> ComplexSightClass;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAISense> SightClass;
    
    UIGS_FrameworkGameDevSettings_AI();

};

