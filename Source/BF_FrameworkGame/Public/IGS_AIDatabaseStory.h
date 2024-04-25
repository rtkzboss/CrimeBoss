#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EIGS_CiviliansVariationType.h"
#include "EIGS_CopsVariationType.h"
#include "EIGS_EmployeesVariationType.h"
#include "EIGS_GangsterVariationType.h"
#include "EIGS_HeistersBackupVariationType.h"
#include "EIGS_SWATVariationType.h"
#include "EIGS_SecurityVariationType.h"
#include "IGS_AIBackupSpecializationHolder.h"
#include "IGS_AIBaseUnitDef.h"
#include "IGS_AICivilianDefaultTierDef.h"
#include "IGS_AICopDefaultTierDef.h"
#include "IGS_AIEmployeeDefaultTierDef.h"
#include "IGS_AIGangsterSpecializationHolder.h"
#include "IGS_AIGuardDefaultTierDef.h"
#include "IGS_AILoadoutHolder.h"
#include "IGS_AISwatSpecializationHolder.h"
#include "Templates/SubclassOf.h"
#include "IGS_AIDatabaseStory.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_AIDatabaseFPS;
class UIGS_SettingsID;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_AIDatabaseStory : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_GangsterVariationType, FIGS_AIGangsterSpecializationHolder> GangsterVariations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_HeistersBackupVariationType, FIGS_AIBackupSpecializationHolder> BackupVariations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_SWATVariationType, FIGS_AISwatSpecializationHolder> SWATVariations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_CopsVariationType, FIGS_AICopDefaultTierDef> CopVariations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_SecurityVariationType, FIGS_AIGuardDefaultTierDef> GuardVariations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_EmployeesVariationType, FIGS_AIEmployeeDefaultTierDef> EmployeeVariations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_CiviliansVariationType, FIGS_AICivilianDefaultTierDef> CivilianVariations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UIGS_SettingsID>, FIGS_AILoadoutHolder> LoadoutOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<AIGS_GameCharacterFramework>, FIGS_AIBaseUnitDef> VIPs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Password;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEdit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_AIDatabaseFPS* FPSDatabase;
    
    UIGS_AIDatabaseStory();

};

