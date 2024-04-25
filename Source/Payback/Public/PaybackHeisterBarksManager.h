#pragma once
#include "CoreMinimal.h"
#include "EIGS_AmmoChangeDefinition.h"
#include "EIGS_DeathDefinition.h"
#include "EIGS_PingableType.h"
#include "EIGS_SquadHealthChangedDefinition.h"
#include "EIGS_WieldableClass.h"
#include "Components/ActorComponent.h"
#include "PaybackHeisterBarksManager.generated.h"

class AActor;
class AIGS_DetectorBase;
class AIGS_GameCharacterFramework;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAYBACK_API UPaybackHeisterBarksManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText VoFinishMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* VoFinishMissionCharacter;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SilenceMinHeisterShootingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SilenceWithoutShooting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OutnumberedEnemies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutnumberedCoolDown;
    
public:
    UPaybackHeisterBarksManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Outnumbered(const AIGS_GameCharacterFramework* inInstigator, const int32 inOutnubmeredCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LootingStarted(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LootingLootBagAdded(const AIGS_GameCharacterFramework* inInstigator, int32 BagCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LootbagPickedUp(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LootbagCatchedInAir(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Lockpicked(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HeisterZiptying(const AIGS_GameCharacterFramework* inInstigator, const AIGS_GameCharacterFramework* ziptiedChar);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HeisterThrowingGrenade(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HeisterSwapGun(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HeisterSubdue(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HeisterSquadSilence(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HeisterSquadHealthChanged(const AIGS_GameCharacterFramework* inInstigator, const EIGS_SquadHealthChangedDefinition inHealthChange);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HeisterSquadCrazyShooting(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HeisterSquadAllDownstate(const AIGS_GameCharacterFramework* lastCharEnteringDownstate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HeisterShove(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HeisterShout(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HeisterReloading(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HeisterPinged(const AIGS_GameCharacterFramework* inInstigator, const EIGS_PingableType inPingType, const AActor* pingedObject);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HeisterKilledAI(const AIGS_GameCharacterFramework* inInstigator, const AIGS_GameCharacterFramework* inKilledChar, bool isStealth, bool isDetected);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HeisterIsDying(const AIGS_GameCharacterFramework* inInstigator, const AIGS_GameCharacterFramework* inDyingHeister);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HeisterInDownState(const AIGS_GameCharacterFramework* inInstigator, const AIGS_GameCharacterFramework* inHeisterDown);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HeisterHostageStopFollow(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HeisterHostageFollow(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HeisterHealthChanged(const AIGS_GameCharacterFramework* inInstigator, const float InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HeisterEquipGun(const AIGS_GameCharacterFramework* inInstigator, const EIGS_WieldableClass inItemClass);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HeisterDestroyedCamera(const AIGS_GameCharacterFramework* inInstigator, const AIGS_DetectorBase* inDestroyedCamera, bool isStealth);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HeisterDeath(const AIGS_GameCharacterFramework* inInstigator, const AIGS_GameCharacterFramework* deathCharacter, const EIGS_DeathDefinition inDeathDefinition);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HeisterBeingRevived(const AIGS_GameCharacterFramework* inInstigator, const AIGS_GameCharacterFramework* inRevivingChar);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HeisterAmmoChange(const AIGS_GameCharacterFramework* inInstigator, const EIGS_AmmoChangeDefinition inAmmoChangeDefinition);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HeisterAlmostDeath(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HeisterAccumulatedHealthChanged(const AIGS_GameCharacterFramework* inInstigator, const float InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BotCommandHoldPosition(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BotCommandFollow(const AIGS_GameCharacterFramework* inInstigator);
    
};

