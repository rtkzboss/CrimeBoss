#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "IGS_ScriptManagerBase.generated.h"

class AController;
class AIGS_GameCharacterFramework;
class AIGS_ScriptActorBase;
class UIGS_RandomStreamHolder;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_ScriptManagerBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_ScriptActorBase*> ScriptActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScriptSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandomStream RandomStream;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_RandomStreamHolder* m_RandomStreamHolder;
    
    AIGS_ScriptManagerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetManagerFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnWarzonePlayerSwapRequested(AController* inInstigatorController);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnManagerReady(int32 inReplicatedSeed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCharacterRegistered(AIGS_GameCharacterFramework* inCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AIGS_ScriptActorBase*> GetScriptsActorsWithTag(FName inTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_RandomStreamHolder* GetRandomStreamHolder();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRandomStream GetRandomStream_TEMP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRandomStream(FRandomStream& outRandomStream);
    
};

