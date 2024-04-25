#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "IGS_EnvQueryContext_GuardSeekPos.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class BF_AI_API UIGS_EnvQueryContext_GuardSeekPos : public UEnvQueryContext {
    GENERATED_BODY()
public:
    UIGS_EnvQueryContext_GuardSeekPos();

};

