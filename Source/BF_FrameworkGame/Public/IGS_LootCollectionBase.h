#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EIGS_AILootingBehavior.h"
#include "IGS_FullyLootedDelegate.h"
#include "IGS_LootCollectionBase.generated.h"

class AIGS_GameCharacterFramework;
class AIGS_LootHolderBase;
class ANavigationData;
class UIGS_InteractiveComponent;
class UIGS_LootItemBaseComponent;
class ULightComponentBase;
class USceneComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_LootCollectionBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalLootValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalMoneyValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalBagSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LootingPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator LootingRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_InteractiveComponent* LootCollectionInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_GameCharacterFramework* LootingCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_GameCharacterFramework* LootSuggestedFor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCosmetic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultSceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, ReplicatedUsing=OnRep_LootItems, meta=(AllowPrivateAccess=true))
    TArray<UIGS_LootItemBaseComponent*> LootItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bIsEmpty, meta=(AllowPrivateAccess=true))
    bool bIsEmpty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<ULightComponentBase*> LightsToDestroy;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_FullyLooted OnFullyLooted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_FullyLooted OnSingleItemLooted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsShineEnabled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_AILootingBehavior m_AILootingBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_GameCharacterFramework*> AllowedCharacters;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bIsInCase, meta=(AllowPrivateAccess=true))
    bool m_bIsInCase;
    
public:
    AIGS_LootCollectionBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void TestLootPosition();
    
public:
    UFUNCTION(BlueprintCallable)
    void SortLoot();
    
    UFUNCTION(BlueprintCallable)
    void SetLootingCharacter(AIGS_GameCharacterFramework* inLootingCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SetLootHolder(AIGS_LootHolderBase* inLootHolder);
    
    UFUNCTION(BlueprintCallable)
    void SetIsShineEnabled(bool inEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetIsInCase(bool inIsInCase);
    
    UFUNCTION(BlueprintCallable)
    void SetAILootingBehvaior(EIGS_AILootingBehavior inLootingBehavior);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllowedCharacter(AIGS_GameCharacterFramework* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    void RegisterLootComponent(UIGS_LootItemBaseComponent* inLootComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LootItems();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_bIsInCase();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_bIsEmpty();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnNavigationBuildFinished(ANavigationData* inNavData);
    
public:
    UFUNCTION(BlueprintCallable)
    void LootItemsChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLootValidForAI(const bool inIgnoreOnlyUnlocked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AIGS_LootHolderBase* GetLootHolder() const;
    
    UFUNCTION(BlueprintCallable)
    void AddAllowedCharacter(AIGS_GameCharacterFramework* inCharacter);
    
};

