#pragma once
#include "CoreMinimal.h"
#include "EIGS_ChainType.h"
#include "IGS_Quick_ActiveChainContractData.h"
#include "IGS_Quick_ChainResultsSaveData.h"
#include "Templates/SubclassOf.h"
#include "IGS_Quick_ChainContractManagerSaveData.generated.h"

class UIGS_ChainContractID;

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_Quick_ChainContractManagerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FIGS_Quick_ActiveChainContractData> ActiveChainsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EIGS_ChainType ActiveChainType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 LastUsedGenericID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UIGS_ChainContractID>, FIGS_Quick_ChainResultsSaveData> ChainContractResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool WasPlayingChainMission;
    
    FIGS_Quick_ChainContractManagerSaveData();
};

