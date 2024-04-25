#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "EIGS_WieldableSlot.h"
#include "EIGS_EnvironmentVolumeType.h"
#include "IGS_ActorEnvironmentTracker.h"
#include "IGS_VisualStyleConfig.h"
#include "IGS_WaterVolumeActorTracker.h"
#include "IGS_WeatherConfig.h"
#include "IGS_WeatherSubsystem.generated.h"

class AActor;
class AIGS_GameCharacterFramework;
class AIGS_WieldableBase;
class APostProcessVolume;
class UActorComponent;
class UIGS_PlayerEffectsComponent;
class UIGS_RainEmittingComponent;
class UIGS_WeatherTrackedBlendable;
class UIGS_WieldableInventoryObjectBase;
class UMaterialParameterCollection;
class UMaterialParameterCollectionInstance;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_WeatherSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* WeatherMPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollectionInstance* WeatherMPCInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_WeatherConfig WeatherConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_VisualStyleConfig VisualStyleConfig;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<AActor>, TWeakObjectPtr<UIGS_RainEmittingComponent>> m_RainEmittingActors;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<AActor>, TWeakObjectPtr<UIGS_WeatherTrackedBlendable>> m_WeatherTrackedBlendables;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<AActor>, TWeakObjectPtr<UIGS_PlayerEffectsComponent>> m_WeatherTrackedPlayerEffects;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<AActor>, FIGS_WaterVolumeActorTracker> m_WeatherTrackedActors;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<AActor>, FIGS_ActorEnvironmentTracker> m_LightingTrackedActors;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AIGS_GameCharacterFramework>> m_RegisteredCharacters;
    
public:
    UIGS_WeatherSubsystem();

    UFUNCTION(BlueprintCallable)
    void UpdateWeather();
    
    UFUNCTION(BlueprintCallable)
    void SetupWeather(FIGS_WeatherConfig inWeatherConfig);
    
    UFUNCTION(BlueprintCallable)
    void SetupVisualStyleOverride(FIGS_VisualStyleConfig inVisualStyleConfig);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PostProcessVolumeEndOverlap(APostProcessVolume* inOverlappedComponent, EIGS_EnvironmentVolumeType inEnvironmentType, AActor* inOtherActor);
    
    UFUNCTION(BlueprintCallable)
    void PostProcessVolumeBeginOverlap(APostProcessVolume* inOverlappedComponent, EIGS_EnvironmentVolumeType inEnvironmentType, AActor* inOtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnWieldableChanged(EIGS_WieldableSlot inSlotType, AIGS_WieldableBase* inWieldableBase, UIGS_WieldableInventoryObjectBase* inInventoryObject);
    
    UFUNCTION(BlueprintCallable)
    void OnWieldableBeginChange(EIGS_WieldableSlot inSlotType, AIGS_WieldableBase* inWieldableBase, UIGS_WieldableInventoryObjectBase* inInventoryObject);
    
    UFUNCTION(BlueprintCallable)
    void EnvironmentVolumeEndOverlap(UActorComponent* inOverlappedComponent, EIGS_EnvironmentVolumeType inEnvironmentType, AActor* inOtherActor);
    
    UFUNCTION(BlueprintCallable)
    void EnvironmentVolumeBeginOverlap(UActorComponent* inOverlappedComponent, EIGS_EnvironmentVolumeType inEnvironmentType, AActor* inOtherActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void EnableWeather();
    
    UFUNCTION(BlueprintCallable)
    void DisableWeather();
    
};

