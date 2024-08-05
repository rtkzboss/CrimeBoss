#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_DangerHolder.h"
#include "IGS_EnemyHolder.h"
#include "IGS_SuspicionComponentHolder.h"
#include "IGS_AIMemoryComponent.generated.h"

class AActor;
class UIGS_SuspicionComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_AIMemoryComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_EnemyHolder> Enemies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_SuspicionComponentHolder> SuspicionComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_DangerHolder> Dangers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> m_CurrentTarget;
    
public:
    UIGS_AIMemoryComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCurrentTarget(AActor* inNewTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetCurrentTarget() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetAllSensedEnemies();
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetAllDmgDealers();
    
    UFUNCTION(BlueprintCallable)
    FIGS_SuspicionComponentHolder BPGetSuspicionComponentByOwner(const AActor* inSuspicionComponentActor);
    
    UFUNCTION(BlueprintCallable)
    FIGS_SuspicionComponentHolder BPGetSuspicionComponent(const UIGS_SuspicionComponent* inSuspicionComponent);
    
    UFUNCTION(BlueprintCallable)
    FIGS_EnemyHolder BPGetEnemyHolder(const AActor* inEnemyActor);
    
};

