#pragma once
#include "CoreMinimal.h"
#include "IGS_ScriptPoint.h"
#include "IGS_ScriptPointCharacterRemover.generated.h"

UCLASS(Abstract, Blueprintable)
class BF_AI_API AIGS_ScriptPointCharacterRemover : public AIGS_ScriptPoint {
    GENERATED_BODY()
public:
    AIGS_ScriptPointCharacterRemover(const FObjectInitializer& ObjectInitializer);

};

