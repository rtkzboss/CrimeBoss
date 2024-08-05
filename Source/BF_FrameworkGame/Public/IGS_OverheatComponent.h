#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_OnOverheatStateChangedDelegate.h"
#include "IGS_OnOverheatValueChangedDelegate.h"
#include "IGS_OverheatComponent.generated.h"

class UCurveFloat;
class UIGS_ShooterBase;
class UIGS_SimpleHitScanShooter;
class UStaticMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_OverheatComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoBindShooter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* OverheatCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IncreasePerBullet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IncreasePerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecreasePerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeUntilCooldown;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnOverheatValueChanged OnOverheatValueChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnOverheatStateChanged OnOverheatStateChangedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsOverheated, meta=(AllowPrivateAccess=true))
    bool mR_bIsOverheated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentOverheat, meta=(AllowPrivateAccess=true))
    float mR_CurrentOverheat;
    
public:
    UIGS_OverheatComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetStaticMeshToApplyOverheat(UStaticMeshComponent* inStaticMesh, const int32 inIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsOverheated();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentOverheat();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleOverheatStateChanged(bool inState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsOverheated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentOverheatValue() const;
    
    UFUNCTION(BlueprintCallable)
    void BindToSimpleShooter(UIGS_SimpleHitScanShooter* inShooter);
    
    UFUNCTION(BlueprintCallable)
    void BindToShooter(UIGS_ShooterBase* inShooter);
    
};

