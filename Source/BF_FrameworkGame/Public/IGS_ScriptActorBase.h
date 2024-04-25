#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "IGS_ScriptActorBase.generated.h"

class AIGS_ScriptManagerBase;
class UIGS_RandomStreamHolder;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_ScriptActorBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ScriptActorTag;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandomStream RandomStream;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_ScriptManagerBase* m_ScriptManager;
    
public:
    AIGS_ScriptActorBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Setup(int32 InSeed);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetupInternal();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRandomStream RandomStreamGetter() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetup(int32 InSeed);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_RandomStreamHolder* GetRandomStreamHolder();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRandomStream(FRandomStream& outRandomStream);
    
};

