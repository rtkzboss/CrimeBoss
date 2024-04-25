#pragma once
#include "CoreMinimal.h"
#include "IGS_HitInfo.h"
#include "GameFramework/Actor.h"
#include "IGS_LaserBase.generated.h"

class AIGS_GameCharacterFramework;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_LaserBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Indestructible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DestroyingReportsToHQ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DestroyingIsSuspicious;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisablingIsSuspicious;
    
    AIGS_LaserBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLaserDisabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLaserDestroyed();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLaserDeath(float inCurrentHealth, float inCurrentShield, float inHealthChange, float inShieldChange, const FIGS_HitInfo& inHitInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    void DisableLaser(AIGS_GameCharacterFramework* inInstigator);
    
};

