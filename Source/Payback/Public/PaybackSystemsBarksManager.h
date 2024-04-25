#pragma once
#include "CoreMinimal.h"
#include "EIGS_AlarmReason.h"
#include "EIGS_StormTacticType.h"
#include "Components/ActorComponent.h"
#include "EIGS_TeamSideEnum.h"
#include "PaybackSystemsBarksManager.generated.h"

class AActor;
class AIGS_GameCharacterFramework;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAYBACK_API UPaybackSystemsBarksManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPaybackSystemsBarksManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WaveManagerControlStart(EIGS_StormTacticType inStormTactic);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WaveManagerAssaultStart(EIGS_TeamSideEnum inTeamSideEnum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WaveManagerAssaultEndingSoon(EIGS_TeamSideEnum inTeamSideEnum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SuspicionManagerMultiKillGuard(AIGS_GameCharacterFramework* inCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SuspicionManagerHQFinished(AActor* inCharacter, bool inWasStrikeAdded);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SuspicionManagerHeistStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SuspicionManagerFirstKillGuard(AIGS_GameCharacterFramework* inCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SuspicionManagerAllGuardsDead(AIGS_GameCharacterFramework* inLastCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SuspicioManagerOnAlarm(EIGS_AlarmReason inReason, AActor* inOffender);
    
};

