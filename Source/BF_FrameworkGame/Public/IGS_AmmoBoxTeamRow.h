#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EIGS_TeamSideEnum.h"
#include "IGS_AmmoBoxSpawnArray.h"
#include "Templates/SubclassOf.h"
#include "IGS_AmmoBoxTeamRow.generated.h"

class AIGS_AmmoBoxBase;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AmmoBoxTeamRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_TeamSideEnum ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AIGS_AmmoBoxBase> AmmoBoxClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FIGS_AmmoBoxSpawnArray> SpawnDataMap;
    
    FIGS_AmmoBoxTeamRow();
};

