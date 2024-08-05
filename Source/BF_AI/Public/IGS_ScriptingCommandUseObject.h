#pragma once
#include "CoreMinimal.h"
#include "EIGS_Speed.h"
#include "IGS_ScriptingCommandAsyncBase.h"
#include "ScriptingCommandOutputPinDelegate.h"
#include "IGS_ScriptingCommandUseObject.generated.h"

class AActor;
class AIGS_GameCharacterFramework;
class UIGS_ScriptingCommandUseObject;

UCLASS(Blueprintable)
class BF_AI_API UIGS_ScriptingCommandUseObject : public UIGS_ScriptingCommandAsyncBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScriptingCommandOutputPin Succeed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScriptingCommandOutputPin Failed;
    
    UIGS_ScriptingCommandUseObject();

    UFUNCTION(BlueprintCallable)
    static UIGS_ScriptingCommandUseObject* ScriptingCommandUseObject(AIGS_GameCharacterFramework* Character, int32 scope, AActor* inUsableObject, EIGS_Speed Speed, bool Crouch);
    
};

