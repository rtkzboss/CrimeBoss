#pragma once
#include "CoreMinimal.h"
#include "CommonHeisterData.h"
#include "GameFramework/OnlineReplStructs.h"
#include "IGS_Quick_ChainPlayerCharacters.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_Quick_ChainPlayerCharacters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 PlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl UniquePlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FCommonHeisterData> Heisters;
    
    FIGS_Quick_ChainPlayerCharacters();
};

