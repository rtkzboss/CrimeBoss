#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_SuspicionOffenceDataTablesAsset.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_SuspicionOffenceDataTablesAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PlayerOffenceTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* NoiseOffenceTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SuspActorsOffenceTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SpecialOffenceTable;
    
    UIGS_SuspicionOffenceDataTablesAsset();

};

