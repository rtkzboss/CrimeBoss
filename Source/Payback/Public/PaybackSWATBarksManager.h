#pragma once
#include "CoreMinimal.h"
#include "EIGS_PlayerDirectionalCueDefinition.h"
#include "EIGS_CarType.h"
#include "EIGS_UnitSpecialization.h"
#include "AIBarksManagerBase.h"
#include "PaybackSWATBarksManager.generated.h"

class AIGS_GameCharacterFramework;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAYBACK_API UPaybackSWATBarksManager : public UAIBarksManagerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> TargetSeenTraceDialogues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> TargetNotSeenTraceDialogues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> TargetSeenDefendDialogues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> TargetNotSeenDefendDialogues;
    
    UPaybackSWATBarksManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayerDirectionCue(const AIGS_GameCharacterFramework* inCharacter, const AIGS_GameCharacterFramework* inPlayer, const EIGS_PlayerDirectionalCueDefinition inPlayerDirectionCue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWentSecurity(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWentPublic(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWentOutside(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWentEmployee(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnThrowGas(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnThrowFrag(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnThrowFlash(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTakingDamage(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSquadEnemySeen(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSquadEnemyLost(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpottedDeath(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpawnedWindows(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpawnedSpecial(const AIGS_GameCharacterFramework* inInstigator, EIGS_UnitSpecialization inUnitSpecialization);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpawnedSecurity(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpawnedPublic(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpawnedOutside(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpawnedInVehicle(const AIGS_GameCharacterFramework* inInstigator, EIGS_CarType inCarType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpawnedEmployee(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpawnedBuilding(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSlope(const AIGS_GameCharacterFramework* inInstigator, float inSlope);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReloading(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMassKill(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInjured(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGadgetDisrupted(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeath(const AIGS_GameCharacterFramework* inInstigator, bool inLastSquadMemberRemaining);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCombatTaunt(const AIGS_GameCharacterFramework* inInstigator, bool isTargetVisible, bool IsDefending);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBreachTakePosition(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBreachIn(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBreachEnd(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBreachClearObstacle(const AIGS_GameCharacterFramework* inInstigator);
    
};

