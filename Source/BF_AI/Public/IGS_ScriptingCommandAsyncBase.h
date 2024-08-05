#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "IGS_ScriptingCommandAsyncBase.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_ScriptingCommandAsyncBase : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UIGS_ScriptingCommandAsyncBase();

};

