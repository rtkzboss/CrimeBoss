#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_OnVulnerableBreakDelegate.h"
#include "IGS_OnVulnerableTakeDamageDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_VulnerableActor.generated.h"

class AIGS_GameCharacterFramework;
class UDamageType;

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API AIGS_VulnerableActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnVulnerableBreak OnVulnerableBreakEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnVulnerableTakeDamage OnVulnerableTakeDamageEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RelativeHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBroken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> VulnerableDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_GameCharacterFramework* CurrentInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHealth;
    
    AIGS_VulnerableActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ResetVulnerableComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsBroken();
    
    UFUNCTION(BlueprintCallable)
    void ApplyVulnerableDamage(float inAmount);
    
};

