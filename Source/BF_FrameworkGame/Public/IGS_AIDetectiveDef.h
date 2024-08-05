#pragma once
#include "CoreMinimal.h"
#include "EIGS_CopsVariationType.h"
#include "IGS_AIBaseDetectiveTierData.h"
#include "IGS_AILoadout.h"
#include "IGS_AIThrowableWeaponDef.h"
#include "IGS_AIUnitCharacterData.h"
#include "IGS_DetectiveSpecificData.h"
#include "Templates/SubclassOf.h"
#include "IGS_AIDetectiveDef.generated.h"

class UMETA_DetectiveID;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AIDetectiveDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMETA_DetectiveID> MetaID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_DetectiveSpecificData Stats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIBaseDetectiveTierData SpecStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIUnitCharacterData Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AILoadout Loadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_AIThrowableWeaponDef> ThrowablePool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_CopsVariationType Variation;
    
    FIGS_AIDetectiveDef();
};

