#pragma once
#include "CoreMinimal.h"
#include "IGS_PropLogicComponentBase.h"
#include "PropSpawnerBudgetStruct.h"
#include "IGS_PropLogicComponent.generated.h"

class AActor;
class UIGS_PropActorSpawner;
class UIGS_PropMeshSpawner;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAYBACK_API UIGS_PropLogicComponent : public UIGS_PropLogicComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPropSpawnerBudgetStruct SpawningBudget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_Parent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsGenerated;
    
public:
    UIGS_PropLogicComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UIGS_PropMeshSpawner*> GetPropMeshSpawners() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UIGS_PropActorSpawner*> GetPropActorSpawners() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetIsGenerated() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void Generate(int32 inPropsSeed);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DespawnActors();
    
};

