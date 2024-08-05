#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "EIGS_TerritoryVolumeType.h"
#include "IGS_TerritoryVolumeManager.generated.h"

class AActor;
class AIGS_TerritoryVolume;
class AVolume;
class UIGS_TerritoryData;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_TerritoryVolumeManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_TerritoryData* TerritoryData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_TerritoryVolume*> m_TerritoryVolumes;
    
public:
    UIGS_TerritoryVolumeManager();

    UFUNCTION(BlueprintCallable)
    void RemoveRestrictionTag(const FName& inTag);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTerritoryVolumeEndOverlap(AVolume* inOverlappedActorVolume, EIGS_TerritoryVolumeType EnvironmentType, AActor* inOtherActor) const;
    
    UFUNCTION(BlueprintCallable)
    void OnTerritoryVolumeBeginOverlap(AVolume* inOverlappedActorVolume, EIGS_TerritoryVolumeType EnvironmentType, AActor* inOtherActor) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetRestrictionTags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetRestrictedTags() const;
    
    UFUNCTION(BlueprintCallable)
    void AddRestrictionTag(const FName& inTag);
    
};

