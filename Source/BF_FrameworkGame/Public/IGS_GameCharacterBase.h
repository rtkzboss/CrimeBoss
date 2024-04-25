#pragma once
#include "CoreMinimal.h"
#include "Perception/AISightTargetInterface.h"
#include "IGS_GameCharacterFramework.h"
#include "Rollbackable.h"
#include "GameplayTagContainer.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_UnitSpecialization.h"
#include "IGS_HasDisabledPropCollisionChangedSignatureDelegate.h"
#include "IGS_HitEffectHandlerInterface.h"
#include "Templates/SubclassOf.h"
#include "IGS_GameCharacterBase.generated.h"

class AIGS_AISpawnPoint;
class AIGS_WaypointFramework;
class UAkAudioEvent;
class UAkComponent;
class UAnimMontage;
class UIGS_DangerAreaComponent;
class UIGS_DynamicMaterialHandlerComponent;
class UIGS_IdleAvoidanceComponent;
class UIGS_ImpactTypeObject;
class UIGS_ItemDropComponent;
class UIGS_RollbackComponent;
class UIGS_SettingsID;

UCLASS(Abstract, Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_GameCharacterBase : public AIGS_GameCharacterFramework, public IAISightTargetInterface, public IRollbackable, public IIGS_HitEffectHandlerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_HasDisabledPropCollisionChangedSignature OnHasDisabledPropCollisionChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_AISpawnPoint* SpawnedOnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_DynamicMaterialHandlerComponent* DynamicMaterialHandlerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DefendTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_SettingsID> SettingsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SpawnedFromMonsterCloset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsInTransition, meta=(AllowPrivateAccess=true))
    bool R_IsInTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_TeamSideEnum TeamSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_UnitSpecialization UnitSpecialization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharacterWieldable3PVModelScaleMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharacterWieldableFPVModelScaleMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_ImpactTypeObject> KillConfirmedParticleID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_RollbackComponent* RollbackComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_DangerAreaComponent* DangerAreaComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_ItemDropComponent* ItemDropComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_IdleAvoidanceComponent* IdleAvoidanceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InjuryOffenceDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DisabledPropCollision, meta=(AllowPrivateAccess=true))
    bool bHasDisabledPropCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRegisterOnBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CrouchAkAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* UncrouchAkAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SlideAkAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SlideStopAkAudioEvent;
    
public:
    AIGS_GameCharacterBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void RM_StopAnimation(UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void RM_PlayAnimation(UAnimMontage* Montage, FName SectionName, float PlayRate, float StartPosition);
    
    UFUNCTION(BlueprintCallable)
    void ResetAICollisionSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSpawnedByAI(AIGS_AISpawnPoint* inSpawnPoint);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsInTransition() const;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DisabledPropCollision();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_IsInTransitionChanged(bool inIsInTransition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AIGS_WaypointFramework* GetSpawnGoToWaypoint() const;
    
    UFUNCTION(BlueprintCallable)
    void DisableAIPropCollision();
    

    // Fix for true pure virtual functions not being implemented
};

