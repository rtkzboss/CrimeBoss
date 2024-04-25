#pragma once
#include "CoreMinimal.h"
#include "IGS_LevelBuilder_LevelScriptActor.h"
#include "IGS_Scenario_LevelScriptActor.generated.h"

UCLASS(Blueprintable)
class BF_LEVELGENERATOR_API AIGS_Scenario_LevelScriptActor : public AIGS_LevelBuilder_LevelScriptActor {
    GENERATED_BODY()
public:
    AIGS_Scenario_LevelScriptActor(const FObjectInitializer& ObjectInitializer);

};

