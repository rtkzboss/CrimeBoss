#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "EIGS_EnvironmentVolumeType.h"
#include "IGS_EnvironmentVolumeManager.generated.h"

class AActor;
class AIGS_EnvironmentVolume;
class APostProcessVolume;
class UActorComponent;
class UBoxComponent;
class UIGS_EnvironmentBoxComponent;
class UIGS_EnvironmentVolumeManager;
class UIGS_FlashlightSettingsDataAsset;
class UObject;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_EnvironmentVolumeManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIGS_EnvironmentBoxComponent*> m_EnvironmentBoxComponents;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UBoxComponent*, TWeakObjectPtr<APostProcessVolume>> m_PostProcessVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_EnvironmentVolume*> m_EnvironmentVolumes;
    
public:
    UIGS_EnvironmentVolumeManager();

    UFUNCTION(BlueprintCallable)
    void SetFlashlightSettingsDataAsset(UIGS_FlashlightSettingsDataAsset* inFlashlightSettingsDataAsset);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPostProcessVolumeEndOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnPostProcessVolumeBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnInteriorVolumeEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnInteriorVolumeBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEnvironmentVolumeEndOverlap(UActorComponent* inOverlappedComponent, EIGS_EnvironmentVolumeType EnvironmentType, AActor* inOtherActor) const;
    
    UFUNCTION(BlueprintCallable)
    void OnEnvironmentVolumeBeginOverlap(UActorComponent* inOverlappedComponent, EIGS_EnvironmentVolumeType EnvironmentType, AActor* inOtherActor) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext=inWorldContextObject))
    static UIGS_EnvironmentVolumeManager* Instance(const UObject* inWorldContextObject);
    
};

