#pragma once
#include "CoreMinimal.h"
#include "EIGS_Speed.h"
#include "IGS_ScriptingCommandAsyncBase.h"
#include "ScriptingCommandOutputPinDelegate.h"
#include "IGS_ScriptingCommandFollowCharacter.generated.h"

class AActor;
class AIGS_GameCharacterFramework;
class UIGS_ScriptingCommandFollowCharacter;

UCLASS(Blueprintable)
class BF_AI_API UIGS_ScriptingCommandFollowCharacter : public UIGS_ScriptingCommandAsyncBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScriptingCommandOutputPin Finished;
    
    UIGS_ScriptingCommandFollowCharacter();

    UFUNCTION(BlueprintCallable)
    static UIGS_ScriptingCommandFollowCharacter* ScriptingCommandFollowCharacter(AIGS_GameCharacterFramework* inFollowingCharacter, AIGS_GameCharacterFramework* inFollowedCharacter, EIGS_Speed inSpeed, float inFollowDistance);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFinished(AActor* inNewFollowActor);
    
};

