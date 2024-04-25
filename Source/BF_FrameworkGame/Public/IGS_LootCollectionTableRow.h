#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IGS_LootCollectionData.h"
#include "Templates/SubclassOf.h"
#include "IGS_LootCollectionTableRow.generated.h"

class UIGS_LootCollectionObject;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_LootCollectionTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_LootCollectionObject> ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_LootCollectionData Data;
    
    FIGS_LootCollectionTableRow();
};

