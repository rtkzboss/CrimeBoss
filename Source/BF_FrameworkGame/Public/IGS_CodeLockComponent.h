#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_CodeLockEndPlayEventDelegate.h"
#include "IGS_CodeLockOccupiedChangedDelegate.h"
#include "IGS_CodeLockStateChangedDelegate.h"
#include "IGS_CylinderValueChangedDelegate.h"
#include "IGS_CodeLockComponent.generated.h"

class AActor;
class AIGS_GameCharacterFramework;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_CodeLockComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Code;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinCylinderValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCylinderValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Cylinders, meta=(AllowPrivateAccess=true))
    TArray<int32> R_Cylinders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsLocked, meta=(AllowPrivateAccess=true))
    bool R_IsLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool R_bIsOccupied;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_CylinderValueChanged OnCylinderValueChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_CodeLockStateChanged OnCodeLockStateChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_CodeLockOccupiedChanged OnCodeLockOccupiedChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_CodeLockEndPlayEvent OnCodeLockEndPlayEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DigitCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_OldOwner;
    
public:
    UIGS_CodeLockComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetInstigator(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable)
    void SetCylinderValue(int32 InValue, int32 inCylinderIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetCode(int32 inCode);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetInstigator(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetCylinderValue(int32 InValue, int32 inCylinderIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsLocked(bool inOldLocked);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Cylinders(TArray<int32> inOldCylinders);
    
    UFUNCTION(BlueprintCallable)
    void IncreaseCylinderValue(int32 inCylinderIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsLocked();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCode();
    
    UFUNCTION(BlueprintCallable)
    void DecreaseCylinderValue(int32 inCylinderIndex);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetCylinderValue(int32 InValue, int32 inCylinderIndex);
    
};

