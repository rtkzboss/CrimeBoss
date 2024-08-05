#pragma once
#include "CoreMinimal.h"
#include "EIGS_Speed.h"
#include "UObject/NoExportTypes.h"
#include "IGS_ScriptingCommandAsyncBase.h"
#include "ScriptingCommandOutputPinDelegate.h"
#include "IGS_ScriptingCommandMoveTo.generated.h"

class AIGS_AIControllerGame;
class AIGS_GameCharacterFramework;
class UIGS_AICommand;
class UIGS_ScriptingCommandMoveTo;

UCLASS(Blueprintable)
class BF_AI_API UIGS_ScriptingCommandMoveTo : public UIGS_ScriptingCommandAsyncBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScriptingCommandOutputPin Succeed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScriptingCommandOutputPin Failed;
    
    UIGS_ScriptingCommandMoveTo();

    UFUNCTION(BlueprintCallable)
    static UIGS_ScriptingCommandMoveTo* ScriptingCommandMoveTo(AIGS_GameCharacterFramework* Character, int32 scope, FVector inPositon, FVector inLookAtPos, bool inUseLookAtPos, EIGS_Speed inMovementSpeed, float inStoppingDistance);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCommandFinished(AIGS_AIControllerGame* inOwningContoller, UIGS_AICommand* inCommand, bool inFailed);
    
};

