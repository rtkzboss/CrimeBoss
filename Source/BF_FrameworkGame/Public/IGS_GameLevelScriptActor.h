#pragma once
#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "IGS_GameLevelScriptActor.generated.h"

class AIGS_ObjectiveScenarioBase;
class AIGS_ScriptManagerBase;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_GameLevelScriptActor : public ALevelScriptActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_ObjectiveScenarioBase* ObjectiveScenarioInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_ScriptManagerBase* ScriptManagerInstance;
    
    AIGS_GameLevelScriptActor(const FObjectInitializer& ObjectInitializer);

};

