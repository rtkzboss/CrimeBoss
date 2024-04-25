#pragma once
#include "CoreMinimal.h"
#include "IGS_EntitlementItemsSaveData.h"
#include "IGS_Quick_BlackmarketManagerSaveData.h"
#include "IGS_Quick_ChainContractManagerSaveData.h"
#include "IGS_Quick_ContractManagerSaveData.h"
#include "IGS_Quick_CrewManagerSaveData.h"
#include "IGS_Quick_FinanceManagerSaveData.h"
#include "IGS_Quick_JobManagerSaveData.h"
#include "IGS_Quick_PlayerManagerSaveData.h"
#include "IGS_Quick_StashManagerSaveData.h"
#include "IGS_SaveData_Version.h"
#include "META_CityMapManagerSaveData.h"
#include "META_StatisticsManagerSaveData.h"
#include "IGS_SaveData_Quickplay.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_SaveData_Quickplay {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString SaveSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsFilled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FIGS_Quick_BlackmarketManagerSaveData BlackmarketManagerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FIGS_Quick_CrewManagerSaveData CrewManagerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FIGS_Quick_StashManagerSaveData StashManagerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMETA_CityMapManagerSaveData CityMapManagerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMETA_StatisticsManagerSaveData StatisticsManagerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FIGS_Quick_FinanceManagerSaveData FinanceManagerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FIGS_Quick_ContractManagerSaveData ContractManagerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FIGS_Quick_ChainContractManagerSaveData ChainContractManagerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FIGS_Quick_JobManagerSaveData JobManagerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FIGS_Quick_PlayerManagerSaveData PlayerManagerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FIGS_EntitlementItemsSaveData EntitlementItemsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FIGS_SaveData_Version SaveDataVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString MetaPersistentId;
    
    FIGS_SaveData_Quickplay();
};

