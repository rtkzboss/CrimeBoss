#pragma once
#include "CoreMinimal.h"
#include "EIGS_AlarmReason.h"
#include "IGS_ScriptingCommandAsyncBase.h"
#include "ScriptingCommandOutputPinDelegate.h"
#include "IGS_ScriptingCommandCallAlarm.generated.h"

class AIGS_AIControllerGame;
class AIGS_GameCharacterFramework;
class UIGS_AICommand;
class UIGS_ScriptingCommandCallAlarm;

UCLASS(Blueprintable)
class BF_AI_API UIGS_ScriptingCommandCallAlarm : public UIGS_ScriptingCommandAsyncBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScriptingCommandOutputPin Succeed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScriptingCommandOutputPin Failed;
    
    UIGS_ScriptingCommandCallAlarm();

    UFUNCTION(BlueprintCallable)
    static UIGS_ScriptingCommandCallAlarm* ScriptingCommandCallAlarm(AIGS_GameCharacterFramework* Character, EIGS_AlarmReason inReason);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCommandFinished(AIGS_AIControllerGame* inOwningContoller, UIGS_AICommand* inCommand, bool inFailed);
    
};

