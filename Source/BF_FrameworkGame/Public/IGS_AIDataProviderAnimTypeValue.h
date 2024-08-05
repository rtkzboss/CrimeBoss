#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EIGS_SpawnAnimType.h"
#include "IGS_AIDataProviderAnimTypeValue.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AIDataProviderAnimTypeValue : public FAIDataProviderTypedValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_SpawnAnimType DefaultValue;
    
    FIGS_AIDataProviderAnimTypeValue();
};

