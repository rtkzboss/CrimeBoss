#pragma once
#include "CoreMinimal.h"
#include "EIGS_CopsVariationType.h"
#include "IGS_AIDetectiveDef.h"
#include "IGS_AIUnitBaseDataDefaults.h"
#include "Templates/SubclassOf.h"
#include "IGS_AIDetectiveHolder.generated.h"

class UMETA_DetectiveID;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AIDetectiveHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIUnitBaseDataDefaults DefaultStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIDetectiveDef Detective1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIDetectiveDef Detective2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIDetectiveDef Detective3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIDetectiveDef Detective4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIDetectiveDef Detective5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIDetectiveDef Detective6;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIDetectiveDef Detective7;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIDetectiveDef Detective8;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIDetectiveDef Detective9;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIDetectiveDef Detective10;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UMETA_DetectiveID>, FIGS_AIDetectiveDef> m_MetaToDetectiveMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_CopsVariationType, FIGS_AIDetectiveDef> m_VarToDetectiveMap;
    
public:
    FIGS_AIDetectiveHolder();
};

