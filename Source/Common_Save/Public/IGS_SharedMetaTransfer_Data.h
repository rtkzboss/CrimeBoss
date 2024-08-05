#pragma once
#include "CoreMinimal.h"
#include "CommonHeisterData.h"
#include "EIGS_MPLobbyType.h"
#include "UObject/NoExportTypes.h"
#include "EIGS_UserDifficulty.h"
#include "EMETA_LobbyVisibilityType.h"
#include "CommonDetectiveData.h"
#include "IGS_MetaTransferDataBase.h"
#include "META_PlayedPresets.h"
#include "IGS_SharedMetaTransfer_Data.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_SharedMetaTransfer_Data : public FIGS_MetaTransferDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid MissionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommonHeisterData> Heisters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommonDetectiveData> Detectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_PlayedPresets PlayedPresets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_UserDifficulty UserDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_LobbyVisibilityType LobbyVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_MPLobbyType MPLobbyType;
    
    FIGS_SharedMetaTransfer_Data();
};

