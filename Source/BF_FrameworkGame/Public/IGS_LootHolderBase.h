#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EIGS_AIStealthLootBehavior.h"
#include "IGS_LootHolderOpenedDelegate.h"
#include "IGS_OnDisplayCaseBrokenEventDelegate.h"
#include "IGS_LootHolderBase.generated.h"

class AIGS_GameCharacterFramework;
class AIGS_LootCollectionBase;
class USceneComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_LootHolderBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_LootCollectionBase* LootCollection;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_LootHolderOpened OnLootHolderOpened;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnDisplayCaseBrokenEvent OnDisplayCaseBrokenEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* AttachableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OpenManually;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OpeningAffectsLootCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractOpenDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAIAttempts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OutlineWithCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_AIStealthLootBehavior AIStealthLooting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BreakToOpen;
    
    AIGS_LootHolderBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldBotBreakToOpen() const;
    
    UFUNCTION(BlueprintCallable)
    void SetLootHolderOpened(AActor* inInstigator);
    
    UFUNCTION(BlueprintCallable)
    void ReportLootCollectionConnected();
    
    UFUNCTION(BlueprintCallable)
    void OpenByAI(AActor* inInstigator);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLockPicked(AIGS_GameCharacterFramework* inInstigator, const bool inSuccess);
    
    UFUNCTION(BlueprintCallable)
    void OnInteracted(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable)
    void OnComponentBroken(AActor* inDmgCauser, const bool inOpen);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LootHolderOpenedEvent(AActor* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpened() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBroken() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeOpenedSilently() const;
    
};

