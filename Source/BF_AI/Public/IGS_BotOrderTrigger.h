#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Engine/TriggerBox.h"
#include "EIGS_CharacterID.h"
#include "IGS_BotOrderData.h"
#include "IGS_BotOrderTrigger.generated.h"

class AActor;
class AIGS_GameCharacterFramework;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class BF_AI_API AIGS_BotOrderTrigger : public ATriggerBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Cooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EIGS_CharacterID> IgnoredCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_BotOrderData> BotsInBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_BotOrderData> PlayersInBox;
    
public:
    AIGS_BotOrderTrigger(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TriggerOrder(AIGS_GameCharacterFramework* forCharacter, bool hasPlayerApproval);
    
    UFUNCTION(BlueprintCallable)
    void RemoveIgnoredCharacter(AIGS_GameCharacterFramework* inCharacter);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCollisionEnter(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inFromSweep, const FHitResult& inSweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnCollisionEnd(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    TArray<FIGS_BotOrderData> GetPlayersInBox();
    
    UFUNCTION(BlueprintCallable)
    TArray<FIGS_BotOrderData> GetBotsInBox();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FinishBotOrder(AIGS_GameCharacterFramework* Bot) const;
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeTriggered(AIGS_GameCharacterFramework* forCharacter);
    
    UFUNCTION(BlueprintCallable)
    void AddIgnoredCharacter(AIGS_GameCharacterFramework* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

