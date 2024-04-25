#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "IGS_OnDrillStartDelegate.h"
#include "IGS_OnDrillableTakeDamageDelegate.h"
#include "IGS_OnDrilledCompleteDelegate.h"
#include "IGS_DrillableComponent.generated.h"

class AIGS_GameCharacterFramework;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKBASE_API UIGS_DrillableComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnDrilledComplete OnDrilledCompleteEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnDrillStart OnDrillStartEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnDrillableTakeDamage OnDrillableTakeDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float CurrentHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float RelativeHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bDrilled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AIGS_GameCharacterFramework* CurrentInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CurrentDrillPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FailThreshold;
    
    UIGS_DrillableComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetDrilledState(bool inDrilled);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_DrillStart(FVector inStartPoint);
    
    UFUNCTION(BlueprintCallable)
    void ResetDrillable();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OnCurrentHealthChange();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDrilledState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDrillableRelativeHealth();
    
    UFUNCTION(BlueprintCallable)
    void DrillStart(FVector inStartPoint, AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable)
    void ApplyDrillDamage(float inAmount);
    
};

