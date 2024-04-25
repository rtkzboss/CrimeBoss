#pragma once
#include "CoreMinimal.h"
#include "EIGS_Speed.h"
#include "IGS_ScriptingCommandAsyncBase.h"
#include "ScriptingCommandOutputPinDelegate.h"
#include "IGS_ScriptingCommandEscape.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_ScriptingCommandEscape;

UCLASS(Blueprintable)
class BF_AI_API UIGS_ScriptingCommandEscape : public UIGS_ScriptingCommandAsyncBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScriptingCommandOutputPin Approach;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScriptingCommandOutputPin Arrive;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScriptingCommandOutputPin Leave;
    
    UIGS_ScriptingCommandEscape();

    UFUNCTION(BlueprintCallable)
    static UIGS_ScriptingCommandEscape* ScriptingCommandEscape(AIGS_GameCharacterFramework* Character, int32 scope, EIGS_Speed Speed);
    
};

