#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "IGS_CustomCanTriggerSignatureDelegate.h"
#include "IGS_OnClientTriggerSignatureDelegate.h"
#include "IGS_OnServerTriggerSignatureDelegate.h"
#include "IGS_LookAtTriggerComponent.generated.h"

class AIGS_GameCharacterFramework;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_LookAtTriggerComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnServerTriggerSignature OnServerTriggered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnClientTriggerSignature OnClientTriggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_CustomCanTriggerSignature CustomCanTrigger;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriggerDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAtTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyFrontFacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSingleUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool mR_bIsEnabledRuntime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool mR_bIsTriggered;
    
public:
    UIGS_LookAtTriggerComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool inEnabled);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Server_Trigger(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Server_CanTrigger(AIGS_GameCharacterFramework* inInstigator);
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetTrigger();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Client_Trigger(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Client_CanTrigger(AIGS_GameCharacterFramework* inInstigator);
    
};

