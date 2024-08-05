#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EIGS_TriggerDeadOrAlive.h"
#include "EIGS_TriggerExecuteOn.h"
#include "IGS_BoxSphere.h"
#include "IGS_TriggerEventEventDelegate.h"
#include "IGS_Trigger.generated.h"

class AActor;
class AIGS_GameCharacterFramework;
class AIGS_PlayerCharacter;
class UTexture2D;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_Trigger : public AIGS_BoxSphere {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_TriggerExecuteOn TriggerExecuteOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TriggerLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TriggerOnBotRepossess: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNotifyLeftOnDeath: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDestroyOnDeactivate: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RetriggerDelay;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTriggerDebug: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseTriggerDebugOptions: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_TriggerDeadOrAlive TriggerDeadOrAlive;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTriggerOnlyOnServer: 1;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_TriggerEventEvent OnExecute;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActorsInside;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_GameCharacterFramework*> CharactersInside;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_PlayerCharacter*> PlayersInside;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TriggerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* SpriteEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* SpriteDisabled;
    
public:
    AIGS_Trigger(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ResetCount();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnActorEndPlay(AActor* inActor, TEnumAsByte<EEndPlayReason::Type> inEndPlayReason);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void Multicast_OnPossessed(AIGS_GameCharacterFramework* inPlayerCharacter);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActorInTrigger(AActor* inActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AIGS_PlayerCharacter*> GetAllPlayersInTrigger() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AIGS_GameCharacterFramework*> GetAllCharactersInTrigger() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetAllActorsInTrigger() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Execute(AActor* inExecutingActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CustomFilter(AActor* inOtherActor);
    
public:
    UFUNCTION(BlueprintCallable)
    int32 CheckAllCharactersInTrigger();
    
};

