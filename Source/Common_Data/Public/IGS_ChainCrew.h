#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EMETA_ItemQuality.h"
#include "IGS_ChainCharacter.h"
#include "Templates/SubclassOf.h"
#include "IGS_ChainCrew.generated.h"

class UIGS_ChainCrewID;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_ChainCrew : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_ChainCrewID> ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_ChainCharacter> Always;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_ChainCharacter> UniquePool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UniqueAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GenericAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_ItemQuality GenericQuality;
    
    FIGS_ChainCrew();
};

