#pragma once
#include "CoreMinimal.h"
#include "META_HeisterStateChangeNote.h"
#include "META_HeisterStateChangeHistory.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_HeisterStateChangeHistory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_HeisterStateChangeNote> StateChanges;
    
    FMETA_HeisterStateChangeHistory();
};

