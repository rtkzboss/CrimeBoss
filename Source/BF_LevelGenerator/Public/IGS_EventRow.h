#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EIGS_Event.h"
#include "IGS_BuildConfigurationTileable.h"
#include "IGS_EventRow.generated.h"

USTRUCT(BlueprintType)
struct BF_LEVELGENERATOR_API FIGS_EventRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_Event EventType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_BuildConfigurationTileable EventSubLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ScriptActorTag;
    
    FIGS_EventRow();
};

