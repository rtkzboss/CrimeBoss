#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_OnOverheatStateChangedDelegate.h"
#include "IGS_OnOverheatValueChangedDelegate.h"
#include "IGS_OverheatComponent.generated.h"

class UIGS_ShooterBase;
class UIGS_SimpleHitScanShooter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_OverheatComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoBindShooter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IncreasePerBullet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IncreasePerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecreasePerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeUntilCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentOverheat, meta=(AllowPrivateAccess=true))
    float mR_CurrentOverheat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsOverheated, meta=(AllowPrivateAccess=true))
    bool mR_bIsOverheated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnOverheatValueChanged OnOverheatValueChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnOverheatStateChanged OnOverheatStateChangedEvent;
    
    UIGS_OverheatComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRep_IsOverheated();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentOverheat();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleOverheatStateChanged(bool inState);
    
    UFUNCTION(BlueprintCallable)
    void BindToSimpleShooter(UIGS_SimpleHitScanShooter* inShooter);
    
    UFUNCTION(BlueprintCallable)
    void BindToShooter(UIGS_ShooterBase* inShooter);
    
};

