#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "EIGS_AlarmReason.h"
#include "IGS_AlarmedSignatureDelegate.h"
#include "IGS_AllGuardsDeadSignatureDelegate.h"
#include "IGS_CamerasDisabledSignatureDelegate.h"
#include "IGS_DetectorPacifiedStateChangedDelegate.h"
#include "IGS_HeisteCanStartDelegate.h"
#include "IGS_LimboSignatureDelegate.h"
#include "IGS_StrikesAddedSignatureDelegate.h"
#include "IGS_VaultOffenceDefinition.h"
#include "IGS_SuspicionManager.generated.h"

class AActor;
class AIGS_GameCharacterFramework;
class AIGS_SuspicionEventActor;
class UIGS_SuspicionComponent;
class UIGS_SuspicionManager;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_SuspicionManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Strikes, meta=(AllowPrivateAccess=true))
    int32 CurrentStrikes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGameplayTag BlameTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EIGS_AlarmReason AlarmReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Alarm, meta=(AllowPrivateAccess=true))
    bool IsAlarmed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HeistCanStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIGS_SuspicionComponent*> SuspicionComponents;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_StrikesAddedSignature OnStrikeAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_LimboSignature OnBotLimboStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AlarmedSignature OnAlarmed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AllGuardsDeadSignature OnAllGuardsDead;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_HeisteCanStart OnHeistCanStartChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_CamerasDisabledSignature OnCamerasDisabled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_DetectorPacifiedStateChanged OnHQSuspicionStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_DetectorPacifiedStateChanged OnHQSuspicionEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_DetectorPacifiedStateChanged OnHQAllDead;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_DetectorPacifiedStateChanged OnHQSuspicionChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AActor*, FIGS_VaultOffenceDefinition> m_VaultOpenDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AActor*, AIGS_SuspicionEventActor*> m_SusOpenDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_GameCharacterFramework*> m_TmpCharacters;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MessagesLocTableNamespace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MessageHQReportKey;
    
public:
    UIGS_SuspicionManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WouldStrikeCauseAlarm(int32 inStrikeCount) const;
    
    UFUNCTION(BlueprintCallable)
    void ReportCivStartEscaping(AIGS_GameCharacterFramework* inCivilian);
    
    UFUNCTION(BlueprintCallable)
    void ReportCivEscaped(AIGS_GameCharacterFramework* inCivilian);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Strikes(int32 inLastStrikes);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Alarm();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnStrikeAdded(int32 inNewStrikes, int32 inIncrease, const FGameplayTag inBlameTag);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_AddSuspicionInfoMessage(int32 inStrikesIncrease, const FText& inBlame);
    
public:
    UFUNCTION(BlueprintCallable)
    void IsSuitableForHeist(const bool inIsSuitable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStrikeAllowed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLastStrike() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UIGS_SuspicionManager* GetSuspicionManager(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    float GetHQSuspicion();
    
    UFUNCTION(BlueprintCallable)
    void CanShowHeistHint(const bool inCanShow);
    
};

