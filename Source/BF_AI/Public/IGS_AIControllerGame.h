#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "IGS_AIControllerBase.h"
#include "IGS_AIControllerGame.generated.h"

class AIGS_NavHintGoal;
class UBehaviorTree;
class UEnvQuery;
class UIGS_AICommand;
class UIGS_AIDetectionComponent;
class UIGS_AIInitialSpawnDataComponent;
class UIGS_AISuspiciousnessComponentBase;
class UIGS_AreaOfOperationsComponent;
class UIGS_BehaviorTreeGameComponent;
class UIGS_BlackboardGameComponent;
class UIGS_NavLinkHandlerComponent;
class UIGS_ScriptingCommandAsyncBase;

UCLASS(Blueprintable)
class BF_AI_API AIGS_AIControllerGame : public AIGS_AIControllerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAvoidanceEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinCornerOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxCornerOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* DefaultBehaviourTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* ShootBehaviourTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* EscapeQueryTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_AISuspiciousnessComponentBase* AISuspiciousnessComponentOptional;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_AIDetectionComponent* AIDetectionComponentOptional;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_BlackboardGameComponent* BlackboardGameComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_BehaviorTreeGameComponent* BehaviorTreeGameComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_AreaOfOperationsComponent* AreaOfOperationsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_NavLinkHandlerComponent* NavLinkHandlerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_AIInitialSpawnDataComponent* InitialSpawnDataComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_AICommand* m_AICommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_AICommand* m_SOCommand;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UIGS_ScriptingCommandAsyncBase>> m_ActiveScriptingCommands;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIMoveRequest m_AsyncMoveRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_NavHintGoal* m_NavHelperGoal;
    
public:
    AIGS_AIControllerGame(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetScriptingPostponed(bool InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCornerOffset(float Value);
    
    UFUNCTION(BlueprintCallable)
    void ReportReload(bool inIsCombat, bool isEmptyMagazine);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RandomizedReladAmmoUsed();
    
    UFUNCTION(BlueprintCallable)
    void OnStartedPlayingMatch();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsSOScopeValid();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsScriptingPosponed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetReloadRequireAmmoUsed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_AISuspiciousnessComponentBase* GetOptionalAISuspiciousnessComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_AIDetectionComponent* GetOptionalAIDetectionComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_NavLinkHandlerComponent* GetNavlinkHandlerComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCornerOffsetMin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCornerOffsetMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCombatRangePrefered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAmmoUsedSinceLastReload() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceLeaveWaypoint();
    
};

