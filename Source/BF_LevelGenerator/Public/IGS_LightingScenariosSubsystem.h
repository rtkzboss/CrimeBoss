#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "EIGS_LightingScenarioType.h"
#include "IGS_LightingScenarioLevelPair.h"
#include "IGS_LightingScenariosSubsystem.generated.h"

class UIGS_LightingScenariosSubsystem;
class ULevelStreamingDynamic;
class UObject;

UCLASS(Blueprintable)
class BF_LEVELGENERATOR_API UIGS_LightingScenariosSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_LightingScenarioType LightingScenario;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLightScenarios;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceMovableSkylight;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelStreamingDynamic* m_RootLevelScenarioStreaming;
    
public:
    UIGS_LightingScenariosSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetUseLightScenarios(bool inUseLightScenarios);
    
    UFUNCTION(BlueprintCallable)
    void SetLightingScenario(EIGS_LightingScenarioType inType);
    
    UFUNCTION(BlueprintCallable)
    void RepropagateLightingScenarioChangesOnStaticMeshes();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext=inWorldContextObject))
    static UIGS_LightingScenariosSubsystem* Instance(const UObject* inWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseLightScenarios() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    TArray<FIGS_LightingScenarioLevelPair> GetLoadedLightingScenarios();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_LightingScenarioType GetCurrentLightingScenarioType() const;
    
    UFUNCTION(BlueprintCallable)
    void DeleteStaticLights();
    
};

