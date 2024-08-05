#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EIGS_MusicMissionState.h"
#include "IGS_NetworkComponentMusic.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_NETWORK_API UIGS_NetworkComponentMusic : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MusicMissionState, meta=(AllowPrivateAccess=true))
    EIGS_MusicMissionState mR_MusicMissionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MusicPackIndex, meta=(AllowPrivateAccess=true))
    int32 mR_MusicPackIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MusicCustomPackName, meta=(AllowPrivateAccess=true))
    FName mR_MusicCustomPackName;
    
public:
    UIGS_NetworkComponentMusic(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_MusicPackIndex() const;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MusicMissionState() const;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MusicCustomPackName() const;
    
};

