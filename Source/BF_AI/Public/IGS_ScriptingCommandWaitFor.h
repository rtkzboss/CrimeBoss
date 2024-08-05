#pragma once
#include "CoreMinimal.h"
#include "IGS_InterestPointHolder.h"
#include "IGS_ScriptingCommandAsyncBase.h"
#include "ScriptingCommandOutputPinDelegate.h"
#include "IGS_ScriptingCommandWaitFor.generated.h"

class AIGS_AIControllerGame;
class AIGS_GameCharacterFramework;
class UIGS_AICommand;
class UIGS_ScriptingCommandWaitFor;

UCLASS(Blueprintable)
class BF_AI_API UIGS_ScriptingCommandWaitFor : public UIGS_ScriptingCommandAsyncBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScriptingCommandOutputPin Succeed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScriptingCommandOutputPin Failed;
    
    UIGS_ScriptingCommandWaitFor();

    UFUNCTION(BlueprintCallable)
    static UIGS_ScriptingCommandWaitFor* ScriptingCommandWaitFor(AIGS_GameCharacterFramework* Character, int32 scope, float InTime, FIGS_InterestPointHolder inLookAt);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCommandFinished(AIGS_AIControllerGame* inOwningContoller, UIGS_AICommand* inCommand, bool inFailed);
    
};

