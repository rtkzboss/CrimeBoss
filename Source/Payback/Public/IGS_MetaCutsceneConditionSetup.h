#pragma once
#include "CoreMinimal.h"
#include "IGS_MetaCutsceneConditionSetup.generated.h"

class UIGS_MetaCutsceneConditionExecuter;
class UObject;

USTRUCT(BlueprintType)
struct PAYBACK_API FIGS_MetaCutsceneConditionSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_MetaCutsceneConditionExecuter* ConditionExecuter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UObject* MetaCondition;
    
    FIGS_MetaCutsceneConditionSetup();
};

