#pragma once
#include "CoreMinimal.h"
#include "IGS_ScriptingCommandAsyncBase.h"
#include "ScriptingCommandMocapEventOutputPinDelegate.h"
#include "IGS_ScriptingCommandPlayMocapAnimation.generated.h"

class AIGS_AIControllerGame;
class AIGS_GameCharacterFramework;
class UAnimMontage;
class UIGS_AICommand;
class UIGS_ScriptingCommandPlayMocapAnimation;

UCLASS(Blueprintable)
class BF_AI_API UIGS_ScriptingCommandPlayMocapAnimation : public UIGS_ScriptingCommandAsyncBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScriptingCommandMocapEventOutputPin Succeed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScriptingCommandMocapEventOutputPin Failed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScriptingCommandMocapEventOutputPin EventStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScriptingCommandMocapEventOutputPin EventEnd;
    
    UIGS_ScriptingCommandPlayMocapAnimation();

    UFUNCTION(BlueprintCallable)
    static UIGS_ScriptingCommandPlayMocapAnimation* ScriptingCommandPlayMocapAnimation(AIGS_GameCharacterFramework* Character, int32 scope, UAnimMontage* inAnimMontage, FName inSectionName, float InPlayRate, float inStartPosition);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCommandFinished(AIGS_AIControllerGame* inOwningController, UIGS_AICommand* inCommand, bool inFailed);
    
};

